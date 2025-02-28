// pointer to array
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, *ptr, *temp;
    ptr = malloc(20); // 400
    temp = ptr;       // 400
    *ptr = 12;
    ptr++; // 404
    *ptr = 34;
    ptr++; // 408
    *ptr = 5;
    ptr++; // 412
    *ptr = 77;
    ptr++; // 416
    *ptr = 99;
    ptr = temp;
    printf("array element are :");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++; // 420
    }
    int sum = 0;
    ptr = temp;
    for (i = 0; i < 5; i++)
    {
        sum = sum + *ptr; // 12
        ptr++;
    }
    printf("\nsum =%d\n", sum);
    printf("only even element of array : ");
    ptr=temp;
    for (i = 0; i < 5; i++)
    {
        if (*ptr % 2 == 0)
        {
            printf("%d ",*ptr);
        }
        ptr++;
    }
    ptr = temp;
    free(ptr); // delete dynamic memory
}