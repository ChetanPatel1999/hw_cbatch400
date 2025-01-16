// wap to find greatest number between two number.
#include <stdio.h>
void main()
{
    int num1, num2;
    printf("enter two numbers : ");
    scanf("%d%d", &num1, &num2);// 122   566
    if (num1>num2)
    {
        printf("greatest num = %d",num1);
    }
    else
    {
        printf("greatest num = %d",num2);
    }
}