// wap to check even odd number.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a value : ");
    scanf("%d", &num); // 13
    if (num % 2 == 0)
    {
        printf("even number\n");
    }
    else
    {
        printf("odd number\n");
    }
}