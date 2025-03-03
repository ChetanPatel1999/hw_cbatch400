#include <stdio.h>
// int i = 1;
void main()
{
    static int i = 1;
    printf("hello world institute\n");
    i++; // 3
    if (i <= 5)
    {
        main();
    }
}