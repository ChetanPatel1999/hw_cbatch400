#include <stdio.h>
void main()
{
    int i, j, s, f;
    for (i = 1; i <= 5; i++) // 3
    {
        for (f = 5; f >= i; f--) // 1
        {
            printf("* ");
        }
        for (s = 2; s < (i * 2) - 1; s++) // 1
        {
            printf("  ");
        }
        for (j = i; j <= 5; j++) // 1
        {
            if (i != 1 || j != 1)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    for (i = 1; i <= 2; i++) // 1
    {

        for (j = 1; j <= 9; j++) // 1
        {

            if (i == 2 || j == 1 || j == 9)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}