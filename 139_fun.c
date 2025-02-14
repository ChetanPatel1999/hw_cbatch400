#include <stdio.h>
void sub() // function defination
{
    int a, b, c;
    printf("subtraction program...\n");
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a - b;
    printf("sub = %d\n", c);
}
void add() // function defination
{
    int a, b, c;
    printf("addition program...\n");
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum = %d\n", c);
}
void main()
{
    add(); // function calling
    add();
}

