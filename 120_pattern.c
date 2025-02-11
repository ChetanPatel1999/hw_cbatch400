#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i >=1; i--)//4
    {
        for (j = 1; j <= i; j++)//4
        {
            printf("%d ",i);// 5 5 5 5
        }
        printf("\n");
    }
}