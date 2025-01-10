// wap to chek given number in range(200-500) or not.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // 50
    num > 200 && num < 500 ? printf("%d is in range(200-500)", num) : printf("%d is not in range(200-500)", num);
}