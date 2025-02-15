#include <stdio.h>
void add();
void main()
{
    int i;
    for (i = 1; i <= 5; i++) // 3
    {
        add();
    }
}
void add()
{
    int a, b, c;
    printf("addition program...\n");
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum = %d\n", c);
}
