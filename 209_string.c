// strrev() :- reverse string
#include <stdio.h>
#include <string.h>
void main()
{
    char name[30];
    int i;
    printf("enter name : "); //
    gets(name);
    printf("name : %s\n", name); // chetan
    printf("reverse string : ");
    for (i = strlen(name) - 1; i >= 0; i--)
    {
        printf("%c", name[i]);
    }
}