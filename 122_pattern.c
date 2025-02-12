#include <stdio.h>
void main()
{
    int i, j,num=1;
    for (i = 1; i <= 4; i++)//3
    {
        for (j = 1; j <= i; j++)//3
        {
            printf("%d ",num);
            num++;//4
        }
        printf("\n");
    }
}