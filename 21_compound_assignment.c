// compound assignment operator
#include <stdio.h>
void main()
{
    int a = 11, b = 5;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    // a += b;
    // b -= a;
    // a *= b;
    // b *= b;
    // a /= b;
    // a %= b;
    b %= a;   // 11 ) 5 (
    printf("a = %d\n", a); // 11
    printf("b = %d\n", b); // 5
}