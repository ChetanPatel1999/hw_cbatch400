#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 3; i++) // 2
    {
        for (j = 1; j <= 4; j++)//1
        {
            if (i<j)
            {
                printf("1 ");   // 1 0 1 0 1
            }                   // 1 0 1 0 1
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}