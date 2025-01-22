// wap to print table 1 to 10.
#include <stdio.h>
void main()
{
    int i, n, e, s;
    printf("enter starting range of table :");
    scanf("%d", &s);
    printf("enter ending range of table :");
    scanf("%d", &e);
    for (n = s; n <= e; n++) // 11
    {
        printf("table of %d : \n", n);
        for (i = 1; i <= 10; i++) // 3
        {
            printf("%d X %d = %d\n", n, i, i * n);
        }
    }
}