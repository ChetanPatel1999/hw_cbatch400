//wap to find greatest number between two numbers.   (num1>num2)
#include<stdio.h>
void main()
{
 int num1,num2;
 printf("enter first num : ");
 scanf("%d",&num1);
 printf("enter second num : ");
 scanf("%d",&num2);
 num1>num2 ? printf("greatest num = %d",num1):printf("greatest num = %d",num2);
}