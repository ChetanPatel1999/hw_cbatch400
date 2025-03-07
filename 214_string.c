// strcat():- its combine two string
#include <stdio.h>
#include <string.h>
void main()
{
    char name[30], sn[30];
    printf("enter name : ");
    gets(name);
    printf("enter sirname : ");
    gets(sn);
    printf("name : %s\n", name);
    printf("sir name : %s\n", sn);
    strcat(name," ");//"chetan "
    strcat(name,sn);
    printf("full name : %s\n", name);
}