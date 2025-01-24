// wap to print digit count of given number .
#include <stdio.h>
void main()
{
    int num, c = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 6
    while (num)
    {
        num = num / 10;
        c++;
    }
    printf("digit count : %d", c);
}