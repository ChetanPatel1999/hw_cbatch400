// wap to check string is plindorom or not.
#include <stdio.h>
#include <string.h>
void main()
{
    char ch1[30];
    printf("enter a string : ");
    gets(ch1); // namtangfds
    int i, j, f = 0;
    i = 0;
    j = strlen(ch1) - 1; // 4
    while (i < j)
    {
        if (ch1[i] != ch1[j])
        {
            f = 1;
            break;
        }
        i++; // 2
        j--; // 3
    }
    if (f == 0)
    {
        printf("string is pilindorm");
    }
    else
    {
        printf("string is not plindrom");
    }
}