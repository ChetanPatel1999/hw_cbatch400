#include <stdio.h>
void main()
{
    int i = 1;
hi:
    printf("%d\n", i);
    i++; // 3
    if (i <= 10)
    {
        goto hi;
    }
}