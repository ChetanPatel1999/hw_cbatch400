#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // 2
    {
        for (j = 1; j <= 5; j++)//1
        {
            if (j%2==0)
            {
                printf("0 ");   // 1 0 1 0 1
            }                   // 1 0 1 0 1
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
}