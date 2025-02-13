#include <stdio.h>
void main()
{
    int i, j, s;
    for (i = 1; i <= 5; i++) // 3
    {
        for (s = 1; s < i; s++) // 1
        {
            printf("  ");
        }
        for (j = i; j <= 5; j++) // 1
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}