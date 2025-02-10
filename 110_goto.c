// wap to print table using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1, n;
    printf("enter a num : ");
    scanf("%d", &n); // 4
lable:
    printf("%d * %d = %d\n", n, i, n * i);
    i++; // 2
    if (i <= 10)
    {
        goto lable;
    }
}