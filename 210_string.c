// strcpy() ;-copy one string into another string
#include <stdio.h>
#include <string.h>
void main()
{
    char ch1[30], ch2[30];
    printf("enter a string : ");
    gets(ch1);
    printf("ch1 = %s\n", ch1);
    printf("ch2 = %s\n", ch2);
    strcpy(ch2, ch1);
    printf("ch1 = %s\n", ch1);
    printf("ch2 = %s\n", ch2);
}