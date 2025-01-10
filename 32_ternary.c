// wap to find greatest number between two numbers.   (num1>num2)
#include <stdio.h>
void main()
{
    int num1, num2, ans;
    printf("enter first num : ");
    scanf("%d", &num1);//122
    printf("enter second num : ");
    scanf("%d", &num2);//900
    ans = num1 > num2 ? num1 : num2;
    printf("greatest num = %d",ans);//900
}