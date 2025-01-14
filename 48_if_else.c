// wap to check given alphabet is vovel or consonant.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a alphabet : ");
    scanf("%c", &ch);// a
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u')
    {
        printf("alphabet is vovel");
    }
    else
    {
        printf("alphabet is consonent");
    }
}