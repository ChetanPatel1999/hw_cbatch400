// putc():- write one char
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch='p';
    ptr = fopen("abc.txt", "a");
    fputc(ch,ptr);
    fclose(ptr);
}
