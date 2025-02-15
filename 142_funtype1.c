// no return type no argumnet
#include <stdio.h>
void add()
{
    int a, b, c;
    printf("addition program...\n");
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum = %d\n", c);
}
void cube()
{
    int n, c;
    printf("enter a num :");
    scanf("%d", &n); // 4
    c = n * n * n;
    printf("cube of %d = %d\n", n, c);
}
void factorial()
{
    int n, fact = 1, i;
    printf("enter a num :");
    scanf("%d", &n);         // 5 1*2*3*4=24
    for (i = 1; i <= n; i++) // 5
    {
        fact = fact * i; // 120
    }
    printf("factorial of %d = %d\n", n, fact);
}
void gretest_num()
{
    int num1, num2;
    printf("enter two numbers : ");
    scanf("%d%d", &num1, &num2); // 122   566
    if (num1 > num2)
    {
        printf("greatest num = %d", num1);
    }
    else
    {
        printf("greatest num = %d", num2);
    }
}
void main()
{
    // add();
    // cube();
    // factorial();
    gretest_num();
}