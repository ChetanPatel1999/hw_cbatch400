#include <stdio.h>
void main()
{
    int a = 12;
    int count = 0;
    printf("a= %d\n", a);//12
    printf("count= %d\n", count);//0
    a++; // a+=5; //a=a+5
    printf("a= %d\n", a);//13
    ++a;
    count++;
    printf("a= %d\n", a);//14
    printf("count= %d\n", count);//1
}