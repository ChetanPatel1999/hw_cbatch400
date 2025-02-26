// we can change any variable value using pointer.
// if pointer have address o that variable
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr = NULL;
    ptr = &a;
    printf("value of a : %d\n", *ptr); // 12
    *ptr = 90;
    printf("value of a : %d\n", *ptr); // 90
    printf("value of a : %d\n", a);    // 90
}