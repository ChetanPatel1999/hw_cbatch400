// wap to count and display common element in given two array.
#include <stdio.h>
void display(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void common_element(int arr1[], int arr2[], int s1, int s2)
{
    int i, j, count = 0;
    printf("common element are :\n");
    for (i = 0; i < s1; i++) // i= 5
    {
        for (j = 0; j < s2; j++) // j=7
        {
            if (arr1[i] == arr2[j])
            {
                count++; // 3
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\ncommon element count : %d ", count);
}
void main()
{
    int arr1[5] = {12, 3, 567, 7, 89};
    int arr2[7] = {3, 22, 7, 899, 122, 3, 567};
    printf("arr1 element are :\n");
    display(arr1, 5);
    printf("arr2 element are :\n");
    display(arr2, 7);
    common_element(arr1, arr2, 5, 7);
}