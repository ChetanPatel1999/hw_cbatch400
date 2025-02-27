// pointer to array
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, *ptr, *temp;
    ptr = malloc(20); // 400
    temp = ptr;       // 400
    printf("enter array element : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr); // 416
        ptr++;            // 420
    }
    ptr = temp;
    printf("array element are :");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++; // 420
    }
    ptr = temp;
    free(ptr); // delete dynamic memory
}