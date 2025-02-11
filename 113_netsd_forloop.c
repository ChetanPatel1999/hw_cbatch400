#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)//4
    {
        printf("outer for loop.......\n");
        for (j = 1; j <= 5; j++)
        {
            printf("hello students \n");
        }
    }
}