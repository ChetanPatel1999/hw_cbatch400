// wap to print factors of given number.
#include <stdio.h>
void main()
{
    int i, num;
    printf("enter a num : ");
    scanf("%d", &num);
    printf("factors of %d : ",num);
    for (i = 1; i <= num; i++) // 15
    {
        if (num % i == 0)
        {
            printf("%d ", i); // 1  3 5 15
        }
    }
}