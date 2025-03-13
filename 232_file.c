// read data from file
// fscanf() is used to read one word at time
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch[20];
    ptr = fopen("facto.txt", "r");
    int f = 0;
    while (1)
    {
        f = fscanf(ptr, "%s", ch);
        if (f == EOF)
        {
            break;
        }
        printf("%s ", ch);
    }
}