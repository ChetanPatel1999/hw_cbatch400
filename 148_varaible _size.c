#include <stdio.h>
void main()
{
    int a;//4 byte
    a=12;
    char ch;// 1 byte
    float f;// 4 byte
    long long int l;
    printf("value of a := %d\n",a);
    printf("adress of a := %d\n",&a);
    printf("size of int : %d\n",sizeof(a));
    printf("size of char : %d\n",sizeof(ch));
    printf("size of flaot : %d\n",sizeof(f));
    printf("size of long long int : %d\n",sizeof(l));
}