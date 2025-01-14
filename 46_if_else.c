// wap to check given two number are same or different.
#include <stdio.h>
void main()
{
    int num1, num2;
    printf("enter frist number : ");
    scanf("%d", &num1);
    printf("enter second number : ");
    scanf("%d", &num2);
    if (num1 == num2)
    {
        printf("nums are same");
    }
    else
    {
        printf("nums are different");
    }
}