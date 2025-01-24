// wap to print number 1 to n;
#include <stdio.h>
void main()
{
    int i = 1, n;
    printf("enter a num : ");
    scanf("%d", &n); // 12
    while (i <= n)
    {
        printf("%d ", i); // 1 3 4...11 12 12
        i++;              // 13
    }
}