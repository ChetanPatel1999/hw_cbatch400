#include <stdio.h>
void main()
{
    char a = 12;     // 1 byte
    int b;           // 4 byte
    float c;         // 4 byte
    double d;        // 8 byte
    short int e;     // 2 byte
    long long int f; // 8 byte
    int *ptr;
    float *ptr1;
    double *ptr2;
    char *ptr3;
    printf("%d %d %d %d\n",sizeof(ptr),sizeof(ptr1),sizeof(ptr2),sizeof(ptr3));
    printf("size of char = %d byte \n", sizeof(a));
    printf("size of int = %d byte \n", sizeof(int));
    printf("size of int = %d byte \n", sizeof(b));
    printf("size of float = %d byte \n", sizeof(c));
    printf("size of double = %d byte \n", sizeof(d));
    printf("size of short int = %d byte \n", sizeof(e));
    printf("size of long long int = %d byte \n", sizeof(f));

}