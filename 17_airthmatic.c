#include<stdio.h>
void main()
{
  int a,b,c,d;
  a=12;
  b=7;
  d=8;
  c=a+b+d;
  printf("ans = %d\n",c);//27
  c=a-b-d;
  printf("ans= %d\n",c);//-3
  c=a+a*b*d;
  printf("ans= %d\n",c);//672
  c=a/b/d;
  printf("ans= %d\n",c);//0
  c=a%b%d;
  printf("ans= %d\n",c);//5
}
