#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, n1, *ptr, *temp, i;
    printf("enter dynamic array size :");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    temp = ptr;
    printf("dynamic array adress : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }
    printf("\nenter incrase dynamic array size :-");
    scanf("%d", &n1); // 8
    ptr = temp;
    ptr = (int *)realloc(ptr, n1 * sizeof(int));
    printf("increse dynamic array address : \n");
    for (i = 0; i < n1; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }

    ptr = temp;
    free(ptr);
}