// wap to swap two numbers using third variable.
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter a = ");
    scanf("%d", &a); // 12
    printf("enter b = ");
    scanf("%d", &b); // 5
    printf("value before swapping : \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    c = a;
    a = b;
    b = c;
    printf("value after swapping : \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}