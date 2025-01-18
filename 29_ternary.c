// wap to check given number is less than 500 or greater than 500. 
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // 456
    num>500 ?printf("%d is greater than 500",num):printf("%d is less than 500",num);   
}