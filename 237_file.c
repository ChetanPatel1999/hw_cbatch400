// fgets():- read one line from file
// fputs():- write one line in file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char read[30];
    ptr = fopen("facto.txt", "r");
    fgets(read, 30, ptr);
    printf("%s", read);
    fclose(ptr);
}