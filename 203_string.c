//use of strlen in real life example
#include <stdio.h>
#include <string.h>
void main()
{
    char mob[11];
    printf("enter a mobile number : ");
    gets(mob);
    if (strlen(mob) == 10)
    {
        printf("valid mobile number");
    }
    else
    {
        printf("invalid mobile number");
    }
}