// wap to print reverse  numbers.
#include <stdio.h>
void num(int n)
{
    printf("%d ", n);
    if (n > 1)
    {
        num(n - 1);
    }
}
void main()
{
    num(10);
    printf("\n");
    num(20);
}