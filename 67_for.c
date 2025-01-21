//wap to print square 1 to n numbers.
#include<stdio.h>
void main()
{
 int i,n;
 printf("enter a num : ");
 scanf("%d",&n);//15
 for(i=1;i<=n;i++)
 {
    printf("square of %d = %d\n",i,i*i);
 }
}