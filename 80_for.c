// wap to check given number is perfect or not.
#include <stdio.h>
void main()
{
    int num, i, sum = 0;
    printf("enter a num : ");
    scanf("%d", &num);         // 6
    for (i = 1; i <= num; i++) // 6
    {
        if (num % i == 0)
        {
            sum = sum + i;
            // 12
        }
    }
    if (sum == num * 2)
    {
        printf("perfect number");
    }
    else
    {
        printf("not perfact number");
    }
}