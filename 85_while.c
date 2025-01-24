// wap to print even number series 1 to n;
#include <stdio.h>
void main()
{
    int i = 1, n;
    printf("enter a num : ");
    scanf("%d", &n); // 12
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);//2 4 6
        }
        i++;
    }
}