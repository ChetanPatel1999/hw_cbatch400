#include <stdio.h>
void main()
{
    int a = 12, b;
    // b = a++; // post incr :-frist assign a value in b after than increse a value by one
    b = ++a;              // pre incr:- frist increse a value by one than assign in b
    printf("a= %d\n", a); // 13
    printf("b= %d\n", b); // 13
}