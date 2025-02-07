#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);//1
        break;
    }
    printf("\nafter for loop");
}