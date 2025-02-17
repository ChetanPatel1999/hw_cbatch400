#include <stdio.h>
int cube(int n)
{
    return (n * n * n);
}
void range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++) // 3
    {
        printf("cube of %d = %d \n", i, cube(i));
    }
}
void main()
{
    range(1, 10);
    range(10,20);
}