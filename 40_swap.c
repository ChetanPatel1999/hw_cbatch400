// wap to swap two numbers without using third variable.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter a = ");
    scanf("%d", &a); // 12
    printf("enter b = ");
    scanf("%d", &b); // 5
    printf("value before swapping : \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value after swapping : \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}