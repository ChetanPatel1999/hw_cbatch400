// wap to search given number in given table.
#include <stdio.h>
void main()
{
    int search, tab, i, f = 0;
    printf("enter a search num : ");
    scanf("%d", &search); // 12
    printf("enter a table : ");
    scanf("%d", &tab); // 6
    for (i = 1; i <= 10; i++)
    {
        if (i * tab == search)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        printf("number is found");
    }
    else
    {
        printf("number is not found");
    }
}