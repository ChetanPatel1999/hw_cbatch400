#include <stdio.h>
void main()
{
    int a = 12;
    int count = 0;
    printf("a= %d\n", a);//12
    printf("count= %d\n", count);//0
    a--;
    printf("a= %d\n", a);//11
    --a;
    count--;
    printf("a= %d\n", a);//10
    printf("count= %d\n", count);//-1
}