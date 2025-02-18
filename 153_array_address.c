// array in c lanaguge
#include <stdio.h>
void main()
{
    int a[5];
    int i;
    printf("array address are : \n");
    for (i = 0; i < 5; i++) // 1
    {
        printf("%d\n",&a[i]);
    }
}