// getc():- read one char
// putc():- write one char
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("183_rec.c", "r");
    while (1)
    {
        ch = getc(ptr);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(ptr);
}
