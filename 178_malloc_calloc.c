// pointer to array
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr1, *ptr2, i;
    ptr1 = (int *)calloc(5, sizeof(int));
    ptr2 = (int *)malloc(5 * sizeof(int));
    printf("\ndefault value of calloc : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr1);
        ptr1++;
    }
    printf("\ndefault value of malloc : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr2);
        ptr2++;
    }
}