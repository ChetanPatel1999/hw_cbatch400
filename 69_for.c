// wap to print table.
#include <stdio.h>
void main()
{
    int i, num, n;
    printf("enter a num : ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        num = i * n;
        printf("%d\n", num);
    }
}