#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, temp, a[10];
    printf("Number of elements in the array\n");
    scanf("%d", &n);
    
    //array input
    for(i=0; i<n; i++)
    {
        printf("Enter array input-%d\n", i+1);
        scanf("%d", &a[i]);
    }
    
    //bubble sort
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
    //Sorted array
    for(i=0; i<n; i++)
    {
        printf("Sorted array\n");
        printf("%d\n", a[i]);
    }
    return 0;
}
