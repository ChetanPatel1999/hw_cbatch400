// wap to check string is plindorom or not.
// strcmp() :- its cpmpare two string if string is same
// retuen 0 otherwise return 1.
#include <stdio.h>
#include <string.h>
void main()
{
    char ch1[30], ch2[30];
    printf("enter a string : ");
    gets(ch1);        // hello
    strcpy(ch2, ch1); // ch2=hello
    strrev(ch1);      // ch1= olleh
    if (strcmp(ch1, ch2) == 0)
    {
        printf("string is plindorm");
    }
    else
    {
        printf("string is not plindorm");
    }
}