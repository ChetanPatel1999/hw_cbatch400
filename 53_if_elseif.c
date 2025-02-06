// wap to check given number is nagative, positive ,or ZERO,
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // 8
    if (num == 0)
    {
        printf("number is zero");
    }
    else if (num < 0)
    {
        printf("num is nagative");
    }
    else
    {
        printf("num is positive");
    }
}