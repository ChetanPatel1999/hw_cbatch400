//wap to print even number using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1;
hi:
    if (i % 2 == 0)
    {
        printf("%d \n", i);
    }
    i++; // 3
    if (i <= 10)
    {
        goto hi;
    }
}