//strlen():- is used to find length of string
#include <stdio.h>
#include <string.h>
void main()
{
    char name[30];
    printf("enter name : ");
    gets(name); // ram
    printf("name : %s\n", name);
    int l;
    l = strlen(name);
    printf("length of string : %d", l);
}