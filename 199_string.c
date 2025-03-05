// how take string from user
//  take sentance from user
#include <stdio.h>
void main()
{
    char name[20];
    printf("enter name : ");
    scanf("%[^\n]s", name);
    printf("name : %s", name);
}