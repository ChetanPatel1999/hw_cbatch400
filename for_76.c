// wap to count factors of given number.
#include <stdio.h>
void main()
{
    int i, num, count = 0;
    printf("enter a num : ");
    scanf("%d", &num);         // 12
    for (i = 1; i <= num; i++) // 15
    {
        if (num % i == 0)
        {
            printf("%d ", i);
            count++; // 6
        }
    }
    printf("\ntotal count of factors of %d = %d", num, count);
}