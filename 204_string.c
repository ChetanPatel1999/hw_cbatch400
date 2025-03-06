//wap to print string length.
#include <stdio.h>
#include <string.h>
void main()
{
    char name1[30],name2[30];
    printf("enter name : ");
    gets(name1); // ram
    printf("enter name : ");
    gets(name2); // ram
    printf("name1 : %s\n", name1);
    printf("name2 : %s\n", name2);
    int i,l=0;
    for(i=0;name1[i]!='\0';i++)
    {
        l++;
    }
    printf("length of string1 : %d", l);
    l=0;
    for(i=0;name2[i]!='\0';i++)
    {
        l++;
    }
    printf("\nlength of string2 : %d", l);
}