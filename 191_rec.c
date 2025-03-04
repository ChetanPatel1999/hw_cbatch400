// wap to print sum 1 to givan range.
#include <stdio.h>
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sum(n - 1);
}
void main()
{
    printf("sum = %d\n", sum(10));
    printf("sum = %d\n", sum(11));
}