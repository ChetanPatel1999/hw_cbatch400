// wap to check given number is prime or not.
#include <stdio.h>
void main()
{
    int num, i, c = 0;
    printf("enter a num : ");
    scanf("%d", &num);         // 12345678
    for (i = 1; i <= num; i++) //4
    {
        if (num % i == 0)
        {
            c++; //3
            if(c>2)
            {
                break;
            }
        }
    }
    if (c == 2)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
}