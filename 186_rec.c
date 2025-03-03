// wap to print 1 to 20 even numbers using recursion.
#include <stdio.h>
void even1_20()
{
    static int i = 1;
    if (i % 2 == 0)
    {
        printf("%d ", i); // 1 2 3...10
    }
    i++; // 11
    if (i <= 20)
    {
        even1_20();
    }
}
void main()
{
    even1_20();
}
