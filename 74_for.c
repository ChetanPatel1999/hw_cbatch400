// wap to print alphabet series.
#include <stdio.h>
void main()
{
    char alpha;
    for (alpha = 'A'; alpha <= 'Z'; alpha++) // Z
    {
        printf("%c ", alpha);
    }
    printf("\n");
    for (alpha = 'a'; alpha <= 'z'; alpha++) // Z
    {
        printf("%c ", alpha);
    }
}