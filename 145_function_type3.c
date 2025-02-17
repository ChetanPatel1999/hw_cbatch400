// with return type with argument
#include <stdio.h>
int cube(int n)
{
    int c;
    c = n * n * n;
    return c;
}
float avrage(float a, float b)
{
    return (a + b) / 2.0;
}
int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int gretest_num(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
char upercase(char ch) // k
{
    // a =97 , b =98
    // A =65 , B =66
    char upper;
    upper = ch - 32; // 65
    return upper;
}
void main()
{
    printf("cube = %d\n", cube(3));
    printf("avrage = %.1f\n", avrage(10.5, 11));
    printf("factorial of 5 = %d\n", factorial(5));
    printf("greatest num : %d\n", gretest_num(56, 3));
    printf("upper case latter  :%c \n", upercase('g'));
}