// continue example
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++)//5
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d\n", i);
    }
}