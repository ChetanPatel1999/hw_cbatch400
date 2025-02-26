#include <stdio.h>
void main()
{
    int i, j;
    for (i = 0; i < 255; i++)
    {
        printf("ascii code of %c = %d\n", i, i);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%c ", 1);
        }
        printf("\n");
    }
}