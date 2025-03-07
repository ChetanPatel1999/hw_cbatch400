// wap to compare two  string.
#include <stdio.h>
#include <string.h>
int cmp(char ch1[], char ch2[])
{
    int i;
    if (strlen(ch1) != strlen(ch2))
    {
        return 0;
    }
    else
    {
        for (i = 0; ch1[i] != '\0'; i++) // 5
        {
            if (ch1[i] != ch2[i])
            {
                return 0;
            }
        }
        return 1;
    }
}
void main()
{
    char ch1[30] = "ram", ch2[30] = "ram";
    if (cmp(ch1, ch2) == 1)
    {
        printf("same");
    }
    else
    {
        printf("different");
    }
}