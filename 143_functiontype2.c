// no return type ,but with argumnet
#include <stdio.h>
void add(int a, int b)
{
    int c;
    c = a + b;
    printf("sum = %d\n", c);
}
void cube(int n)
{
    int c;
    c = n * n * n;
    printf("cube of %d = %d\n", n, c);
}
void factorial(int n)
{
    int fact = 1, i;
    for (i = 1; i <= n; i++) // 5
    {
        fact = fact * i; // 120
    }
    printf("factorial of %d = %d\n", n, fact);
}
void range_fact(int s, int e)
{
    int i;
    for (i = s; i <= e; i++)//3
    {
        factorial(i);
    }
}
void main()
{
    add(6, 9);
    cube(5);
    factorial(4);
    range_fact(1, 10);
    range_fact(5, 8);
}
