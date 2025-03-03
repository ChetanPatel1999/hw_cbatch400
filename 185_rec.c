// wap to print 1 to 10 numbers using recursion.
#include <stdio.h>
void num1_10()
{
    static int i = 1;
    printf("%d ", i);//1 2 3...10
    i++;//11
    if (i <= 10)
    {
        num1_10();
    }
}
void main()
{
    num1_10();
}
