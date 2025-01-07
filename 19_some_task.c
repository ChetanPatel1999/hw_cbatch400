#include <stdio.h>
void main()
{
    int c;
    c = 12 % 5 * (6 + 8) / 9 * 5;
    printf("ans = %d\n", c);
    c = 12 % 5 * (6 <= 8) / 2 * 5;
    printf("ans = %d\n", c);
    c = 12 * 5 * (6 + 8) / 9 % 5;
    printf("ans = %d\n", c);
}