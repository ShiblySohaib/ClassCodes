#include <stdio.h>
int main()
{
    int x, y;
    short int z;
    x = 123456;
    y = 654321;
    z = x + y;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d", z);     //Correct output will not be shown because it is out of range for variable z.

 
    return 0;
}
