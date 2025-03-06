// wap to make a function to find string length.
#include <stdio.h>
#include <string.h>
int length(char ch[])
{
    int i, l = 0;
    for (i = 0; ch[i] != '\0'; i++)
    {
        l++;
    }
    return l;
}
void main()
{
    char name1[30], name2[30];
    printf("enter name : ");
    gets(name1); // ram
    printf("enter name : ");
    gets(name2); // ram
    printf("name1 : %s\n", name1);
    printf("name2 : %s\n", name2);
    int r = length(name1);
    printf("length of string1 : %d\n", r);
    r = length(name2);
    printf("length of string2 : %d\n", r);
}