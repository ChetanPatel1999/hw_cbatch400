// pointer to array
#include <stdio.h>
void main()
{
    int arr[5];
    int i, *ptr;
    ptr = &arr[0];
    printf("enter array element : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr); // 416
        ptr++;            // 420
    }
    ptr = &arr[0];
    printf("array element are :");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
}