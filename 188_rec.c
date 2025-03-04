// wap to print factorial of given number using recursion.
#include <stdio.h>
int fact_no_rec(int n) // 5
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i; // 120
    }
    return fact;
}
int fact_rec1(int n) // 5
{
    static int i = 1, fact = 1;
    fact = fact * i; // 6
    i++;             // 3
    if (i <= n)
    {
        fact_rec1(n);
    }
    return fact;
}
int fact_rec2(int n) // 2
{
    static int fact = 1;
    fact = fact * n; // 120
    n--;             // 0
    if (n > 0)
    {
        fact_rec2(n);
    }
    return fact;
}
int fact_rec3(int n) // 4
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact_rec3(n - 1);
}
void main()
{
    int res = fact_rec3(4);
    printf("factorial : %d", res);
}