// fgets() :- take string from user
// fputs() :- display string
#include <stdio.h>
void main()
{
    char name[10];
    printf("enter name : ");
    fgets(name,10,stdin);
    printf("name of student : ");
    fputs(name,stdout);
}