// wap to check given number is prime or not.
#include <stdio.h>
void main()
{
    int num, i, c = 0;
    printf("enter a num : ");
    scanf("%d", &num); //4
    if (num == 0 || num == 1)
    {
        printf("not prime number");
    }
    else
    {
        for (i = 1; i <= num; i++)//3
        {
            if (num % i == 0)
            {
                c ++; //0
            }
        }

        if (c > 2)
        {
            printf("not prime number");
        }
        else
        {
            printf("prime number");
        }
    }
}