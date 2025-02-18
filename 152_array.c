// array in c lanaguge
#include <stdio.h>
void main()
{
    int a[5];
    int i;
    //code for take array value by user at programm run time
    printf("enter array element :\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("array element are : \n");
    for (i = 0; i < 5; i++) // 1
    {
        printf("%d\n", a[i]); 
    }

}