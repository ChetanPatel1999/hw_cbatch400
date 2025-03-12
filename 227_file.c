// write data into file
#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("abc.txt", "w");
    fprintf(ptr, "this content write inside file using printf\n");
    fclose(ptr);
}