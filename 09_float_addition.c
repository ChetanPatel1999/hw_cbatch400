#include<stdio.h>
void main()
{
   float a,b,c;
   printf("enter two value : ");
   scanf("%f%f",&a,&b);	
   printf("value of a = %.2f\n",a);
   printf("value of b = %.2f\n",b);
   c=a-b;
   printf("subtraction of %.2f and %.2f = %.2f",a,b,c);
}
