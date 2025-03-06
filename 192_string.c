// string in c language
#include <stdio.h>
void main()
{
    //char city[] = {'i', 'n', 'd', 'o', 'r', 'e', '\0'};
    char city[] = "indore";
    printf("city name : %s\n", city);//indore
    printf("%c\n", city[0]);//i
    printf("%c\n", city[1]);//n
    printf("%c\n", city[2]);//d
    printf("%c\n", city[3]);//o
}