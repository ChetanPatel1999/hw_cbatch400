// wap to check given numbers is even-positive
//  ,odd-positive, even-nagative or odd-nagative
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);//8
    if (num == 0)
    {
        printf("num is zero");
    }
    else if (num > 0)
    {
        if (num % 2 == 0)  // 2) 8 (
        {
            printf("even-positive");
        }
        else
        {
            printf("odd-positive");
        }
    }
    else
    {
        if (num % 2 == 0)
        {
            printf("even-nagative");
        }
        else
        {
            printf("odd-nagative");
        }
    }
}