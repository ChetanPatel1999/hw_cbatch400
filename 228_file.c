//append mode for append new content inside file 
#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("abc.txt", "a");
    fprintf(ptr, "this content write inside file using printf\n");
    fclose(ptr);
}