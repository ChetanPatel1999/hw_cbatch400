// wap to take array element and print reverse array element.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size  :");
    scanf("%d", &n);
    int a[n];
    int i;
    printf("enter array element :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("array element are : \n");
    // 0  1 2  3 4
    // 12 3 56 7 8
    for (i = 0; i < n; i++) // 1
    {
        printf("%d ", a[i]); // 12
    }
    printf("\narray element in reverse order are : \n");
    // 0  1 2  3 4
    // 12 3 56 7 8
    for (i = (n - 1); i >= 0; i--) // 1
    {
        printf("%d ", a[i]); // 12
    }
}