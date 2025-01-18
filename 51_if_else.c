// wap to check given number is divisible by 5 or not.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // 17
    if (num % 5 == 0)
    {
        printf("%d is divisible by 5", num);
    }
    else
    {
        printf("%d is not divisible by 5", num);
    }
}