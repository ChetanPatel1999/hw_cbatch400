//strrev() :- reverse string
#include<stdio.h>
void main()
{
  char name[30];
  printf("enter name : ");//
  gets(name);
  printf("name : %s\n",name);
  strrev(name);
  printf("reverse name : %s",name);
}