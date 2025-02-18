// array in c lanaguge
#include <stdio.h>
void main()
{
    int a[5] = {12, 34, 56, 78, 90};
    int i;
    printf("array element are : \n");
    for (i = 0; i < 5; i++) // 1
    {
        printf("%d\n", a[i]);
    }
    a[3] = 789;
    printf("array element are : \n");
    for (i = 0; i < 5; i++) // 1
    {
        printf("%d\n", a[i]);
    }
}