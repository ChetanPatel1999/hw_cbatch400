// wap to COUNT EVEN ELEMENT IN ARRAY..
#include <stdio.h>
int main()
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
    // 0  1 2  3 4
    // 12 3 56 7 8
    int count=0;
    for (i = 0; i < n; i++) // 1
    {
        if (a[i] % 2 == 0)
        {
           count++;
        }
    }
    printf("total even count : %d",count);
}