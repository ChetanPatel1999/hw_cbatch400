// pointer to variable
#include <stdio.h>
void main()
{
    int a = 12, *ptr, b = 90;
    ptr = &a;
    printf("value of a : %d\n", a);
    printf("address of a : %d\n", &a);
    printf("address of a by ptr : %d\n", ptr);
    printf("address of  ptr : %d\n", &ptr);
    printf("value of a by ptr : %d\n", *ptr);
}