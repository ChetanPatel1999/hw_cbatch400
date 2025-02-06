// wap to print sum of individual digit of given number.
#include <stdio.h>
void main()
{
    int num, sum = 0, rem;
    printf("enter a num : ");
    scanf("%d", &num);//125
    while (num)
    {
        rem = num % 10;//1
        sum = sum + rem;//8
        num = num / 10;//0
    }
    printf("sum of individual digit : %d", sum);
}