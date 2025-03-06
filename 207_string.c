// make a function to change upper to lower string.
#include <stdio.h>
void upper(char ch[]) // rAm
{
    int i;
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] != ' ' && (ch[i] >= 'a' && ch[i] <= 'z'))
        {
            ch[i] = ch[i] - 32;
        }
    }
}
void lower(char ch[])
{
    int i;
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] != ' ' && (ch[i] >= 'A' && ch[i] <= 'Z'))
        {
            ch[i] = ch[i] + 32;
        }
    }
}
void main()
{
    char name[30];
    printf("enter name : ");
    gets(name); // ram
    printf("name : %s\n", name);
    upper(name);
    printf("upper case name : %s\n", name);
    lower(name);
    printf("lower case name : %s\n", name);
}