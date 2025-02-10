#include <stdio.h>
void main()
{
    int i = 1;
hi:
    printf("hi students\n");
    i++; // 3
    if (i <= 5)
    {
        goto hi;
    }
    printf("after if stmnt");
}