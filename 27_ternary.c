//wap to cheak voter is eligible for casting votr or not.
#include<stdio.h>
void main()
{
  int age;
  printf("enter your age : ");
  scanf("%d",&age);//45
  age>=18 ?printf("you are eligible"):printf("you are not eligible");
}