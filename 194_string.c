// we can change a particuler character of string using index
#include <stdio.h>
void main()
{
    char city[] = "indore is a city";
    int i;
    printf("string : %s\n", city);
    city[2] = 'm';
    printf("string : %s\n", city);
    for (i = 0; city[i] != '\0'; i++)
    {
        if (city[i] != ' ')
        {
            city[i] = city[i] + 1;
        }
    }
    printf("string : %s\n", city);
}
