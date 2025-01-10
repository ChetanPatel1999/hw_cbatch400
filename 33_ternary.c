// wap to find greatest number between three numbers.
#include <stdio.h>
void main()
{
    int num1, num2, num3, ans;
    printf("enter first num : ");
    scanf("%d", &num1); // 122
    printf("enter second num : ");
    scanf("%d", &num2); // 900
    printf("enter third num : ");
    scanf("%d", &num3); // 8967
    ans = num1 > num2 ? num1 : num2;
    ans = ans > num3 ? ans : num3;
    printf("greatest num = %d", ans); // 900
}