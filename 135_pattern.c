#include <stdio.h>
void main()
{
    int i, j;
    for (i = 97; i <= 100; i++) // 2
    {
        for (j = i; j <=100; j++) // 1
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}