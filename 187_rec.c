// wap to print even numbers 1 to given range using recursion.
#include <stdio.h>
void even(int e)
{
    static int i = 1;
    if (i % 2 == 0)
    {
        printf("%d ", i); // 1 2 3...10
    }
    i++; // 5
    if (i <= e)
    {
        even(e);
    }
}
void main()
{
    even(40);
}
