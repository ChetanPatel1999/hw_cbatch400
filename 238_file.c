//fseek() :_ is used to set pointer at any postion of file 
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("facto.txt", "r");
    fseek(ptr,10,SEEK_SET);
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
