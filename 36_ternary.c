// wap to check given number is divisible by 7 or not.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // 12
    num % 7 == 0 ? printf("%d is divisible by 7", num)
                 : printf("%d is not divisible by 7", num);
}