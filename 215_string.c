// wap to copy one string into another string.
#include <stdio.h>
void copy(char ch1[], char ch2[])
{
    int i;
    for (i = 0; ch1[i] != '\0'; i++) // 5
    {
        ch2[i] = ch1[i];
    }
    ch2[i] = '\0';
}
void main()
{
    char ch1[30], ch2[30];
    printf("enter a string : ");
    gets(ch1); // hello
    copy(ch1, ch2);
    printf("copy string : %s", ch2);
}