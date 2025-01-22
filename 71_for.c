// wap to print even number series.
#include <stdio.h>
void main()
{
    int i, s = 5, e = 20;
    printf("even number series between %d to %d  : ", s, e);
    for (i = s; i <= e; i++) // 8
    {
        if (i % 2 == 0)
        {
            printf("%d ", i); // 4
        }
    }
}