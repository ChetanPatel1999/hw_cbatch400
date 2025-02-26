// array in c lanaguge
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size  :");
    scanf("%d",&n);//5
    int a[n];
    int i;
    // code for take array value by user at programm run time
    printf("enter array element :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("array element are : \n");
    for (i = 0; i < n; i++) // 1
    {
        printf("%d ", a[i]);
    }
}