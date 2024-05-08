def avg_wt(arrival_time, burst_time):
    n = len(arrival_time)

    completion_time = [0] * n

    remaining_burst_time = burst_time.copy()

    current_time = 0

    while True:
        shortest_remaining_index = -1
        shortest_remaining_time = float('inf')

        for i in range(n):
            if (arrival_time[i] <= current_time and
                remaining_burst_time[i] < shortest_remaining_time and
                remaining_burst_time[i] > 0):
                shortest_remaining_time = remaining_burst_time[i]
                shortest_remaining_index = i

        if shortest_remaining_index == -1:
            break

        remaining_burst_time[shortest_remaining_index] -= 1

        current_time += 1

        if remaining_burst_time[shortest_remaining_index] == 0:
            completion_time[shortest_remaining_index] = current_time

    waiting_time = [completion_time[i] - arrival_time[i] - burst_time[i] for i in range(n)]

    return sum(waiting_time) / n

arrival_time = [0, 1, 2, 3]
burst_time = [8, 4, 9, 5]

average_waiting_time = avg_wt(arrival_time, burst_time)

print(f"Average waiting time: {average_waiting_time}")
