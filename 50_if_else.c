// wap to find smallest number btween two number.
#include <stdio.h>
void main()
{
    int num1, num2;
    printf("enter two numbers : ");
    scanf("%d%d", &num1, &num2);// 122   566
    if (num1<num2)
    {
        printf("smallest num = %d",num1);
    }
    else
    {
        printf("smallest num = %d",num2);
    }
}