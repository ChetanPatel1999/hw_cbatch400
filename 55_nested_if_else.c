// wap to find greater number between three numbers and also check greates number is even or odd.
#include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("enter three values : ");
    scanf("%d%d%d", &num1, &num2, &num3);
    //                121     45   400
    if (num1 > num2 && num1 > num3)
    {
        printf("greatest num : %d\n", num1);
        if (num1 % 2 == 0)
        {
            printf("%d is even", num1);
        }
        else
        {
            printf("%d is odd", num1);
        }
    }
    else if (num2 > num3)
    {
        printf("greatest num : %d\n", num2);
        if (num2 % 2 == 0)
        {
            printf("%d is even", num2);
        }
        else
        {
            printf("%d is odd", num2);
        }
    }
    else
    {
        printf("greatest num : %d\n", num3);
        if (num3 % 2 == 0)
        {
            printf("%d is even", num3);
        }
        else
        {
            printf("%d is odd", num3);
        }
    }
}