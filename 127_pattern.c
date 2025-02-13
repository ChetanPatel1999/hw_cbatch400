#include <stdio.h>
void main()
{
    int i, j, n = 0;
    for (i = 1; i <= 5; i++) // 1
    {
        for (j = 1; j <= 5; j++) // 2
        {
            printf("%d ", n);// 0 1 0
            n = 1 - n;//1
        }
        printf("\n");
    }
}