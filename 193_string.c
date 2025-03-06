// string itrate using null character
#include <stdio.h>
void main()
{
    char city[] = "indore is a city";
    int i;
    printf("string : %s\n", city);
    for (i = 0; city[i] != '\0'; i++) // 16
    {
        printf("%c ", city[i]); // i n d o r e
    }
}