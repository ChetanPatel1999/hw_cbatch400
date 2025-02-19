// wap to find greatest number in array.
#include <stdio.h>
void main()
{
    int arr[5] = {126, 34, 5, -666, 8};
    int max = arr[0], i;
    for (i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("max element in array : %d", max);
}