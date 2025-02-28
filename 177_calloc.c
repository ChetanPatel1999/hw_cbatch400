// pointer to array
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, *ptr, *temp;
    int n;
    printf("enter dynamic array size :");
    scanf("%d", &n);                     // 7
    ptr = (int *)calloc(n,sizeof(int)); // 400
    temp = ptr;                          // 400
    printf("enter array element :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr = temp;
    printf("array element are :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++; // 420
    }
    int sum = 0;
    ptr = temp;
    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr; // 12
        ptr++;
    }
    printf("\nsum =%d\n", sum);
    printf("only even element of array : ");
    ptr = temp;
    for (i = 0; i < n; i++)
    {
        if (*ptr % 2 == 0)
        {
            printf("%d ", *ptr);
        }
        ptr++;
    }
    ptr = temp;
    free(ptr); // delete dynamic memory
}