#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++)//5
    {
        printf("%d ", i); //1
        if (i < 5)
        {
            break;
        }
    }
    printf("\nafter for loop");
}