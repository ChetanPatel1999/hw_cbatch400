#include <stdio.h>
void main()
{
    int i = 1;
    printf("hi students\n");
    i++; // 2
    if (i <= 5)
    {
        goto hi;
    }
    printf("after if stmnt");
hi:
    printf("after lable");
}