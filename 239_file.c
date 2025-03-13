//rewind(ptr):- its set pointer at begning of file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("facto.txt", "r");
   
    while (1)
    {
        ch = getc(ptr);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    rewind(ptr);
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
