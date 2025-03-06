// struper its convert string in upper case.
#include <stdio.h>
void main()
{
    char name[30];
    printf("enter name : ");
    gets(name); // ram
    printf("name : %s\n", name);
    strupr(name);
    printf("upper case name : %s\n", name);
    strlwr(name);
    printf("lower case name : %s\n", name);
}