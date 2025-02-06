#include<stdio.h>
void main()
{
 int total_sal_distribute=0,sal,p;
 do
 {
   printf("enter sallary : ");
   scanf("%d",&sal);//500
   total_sal_distribute=total_sal_distribute+sal;
   printf("more emp is left so press 1 : ");
   scanf("%d",&p);//6
 } while (p==1);
 printf("total sallary distribute today : %d",total_sal_distribute);
 
}