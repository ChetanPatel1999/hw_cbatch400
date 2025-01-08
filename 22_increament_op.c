#include <stdio.h>
void main()
{
    int a = 12;
    int count = 0;
    printf("a= %d\n", a);
    printf("count= %d\n", count);
    a++; // a+=5; //a=a+5
    printf("a= %d\n", a);
    ++a;
    count++;
    printf("a= %d\n", a);
    printf("count= %d\n", count);
}