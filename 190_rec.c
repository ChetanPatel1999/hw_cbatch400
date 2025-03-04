// wap to print reverse  numbers.
#include <stdio.h>
void num(int n)
{
    if (n > 1)
    {
        num(n - 1);
    }
    printf("%d ", n);
}
void main()
{
    num(10);
    printf("\n");
    num(100);
}