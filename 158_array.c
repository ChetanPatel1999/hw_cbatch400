//wap to find max element in given array.
#include <stdio.h>
int find_max(int arr[], int size)
{
    // 22, 3, 567, 7, 899, 122, 78
    int max = arr[0], i;
    for (i = 1; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
void display(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void main()
{
    int arr1[5] = {12, 3, 567, 7, 89};
    int arr2[7] = {22, 3, 567, 7, 899, 122, 78};
    int arr3[3] = {66, 777, 89};
    int i;
    printf("arr1 element are : \n");
    display(arr1, 5);
    int res = find_max(arr1, 5);
    printf("arr1 max element :%d \n", res);
    printf("arr2 element are : \n");
    display(arr2, 7);
    res = find_max(arr2, 7);
    printf("arr2 max element :%d \n", res);
    printf("arr3 element are : \n");
    display(arr3, 3);
    res = find_max(arr3, 3);
    printf("arr3 max element :%d \n", res);
}