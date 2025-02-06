// wap to print sum of all even numbers 1 to n;
#include <stdio.h>
void main()
{
    int i = 1, n, sum = 0;
    printf("enter a num : ");
    scanf("%d", &n); // 12
    while (i <= n)   // 2 <=12
    {
        if (i % 2 == 0)
        {
            sum = sum + i; // 12
        }
        i++; // 7
    }
    printf("sum of even number : %d",sum);
}