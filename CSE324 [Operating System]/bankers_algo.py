def isSafe(processes, total, maxm, allot):
    P = len(processes)
    
    available = total.copy()

    for sublist in allot:
        for i in range(len(sublist)):
            available[i] -= sublist[i]

    R = len(available)
 
    need = [[0 for _ in range(R)] for _ in range(P)]
    for i in range(P):
        for j in range(R):
            need[i][j] = maxm[i][j] - allot[i][j]
 
    finish = [False]*P
 
    safeSeq = [0]*P
 
    work = available.copy()
 
    count = 0
    while(count < P):
        found = False
        for p in range(P):
 
            if finish[p] == False:
 
                for j in range(R):
                    if need[p][j] > work[j]:
                        break
                     
                if j == R - 1:
 
                    for k in range(R):
                        work[k] += allot[p][k]
 
                    safeSeq[count] = processes[p]
                    count += 1
 
                    finish[p] = True
 
                    found = True
                 
        if found == False:
            print("System is not in safe state")
            return False
 
    print("System is in safe state.",
          "\nSafe sequence is: ", end = "")
    print(*safeSeq)
 
    return True



processes = [0, 1, 2, 3, 4]
total = [10, 5, 7]
maxm = [[7, 5, 3], [3, 2, 2], [9, 0, 2], [2, 2, 2], [4, 3, 3]]
allot = [[0, 1, 0], [2, 0, 0], [3, 0, 2], [2, 1, 1], [0, 0, 2]]

isSafe(processes, total, maxm, allot)

