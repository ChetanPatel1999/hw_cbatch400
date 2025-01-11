// wap to check given number is divisible by 3 and 4 or not.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num);
    num % 3 == 0 && num % 4 == 0 ? printf("%d is divisible by 3,4") : printf("%d is not divisible by 3,4");
}