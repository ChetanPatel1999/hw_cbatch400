// when we increase a pointer value by one so its
// value increase by 4 if pointer type is integer.
#include <stdio.h>
void main()
{
    double a = 12, *ptr;
    ptr = &a;
    printf("addres of a : %d\n", &a);
    printf("value of ptr : %d\n", ptr);
    ptr++;
    printf("addres of a : %d\n", &a);
    printf("value of ptr : %d\n", ptr);
}