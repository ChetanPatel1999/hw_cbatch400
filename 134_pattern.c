#include <stdio.h>
void main()
{
    int i, j;
    for (i = 65; i <= 69; i++) // 2
    {
        for (j = 65; j <= i; j++) // 1
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}