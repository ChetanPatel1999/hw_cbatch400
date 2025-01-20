//wap to print your friend name according to frist latter of name.
#include<stdio.h>
void main()
{
  char first_letter;
  printf("enter a letter : ");
  scanf("%c",&first_letter);//r
  switch(first_letter)
  {
    case 'r':printf("radhika");break;
    case 'v':printf("vishal");break;
    case 'b':printf("balram");break;
    case 'm':printf("mohit rathore");break;
    case 'j':printf("jayati");break;
    default :printf("you not have friend which name start with %c",first_letter);
  }
}