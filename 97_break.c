#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++)//5
    {
        printf("%d ", i); // 1 2 3 4 5
        if (i == 5)
        {
            break;
        }
    }
    printf("\nafter for loop");
}