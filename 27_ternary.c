// wap to cheak voter is eligible for casting vote or not.
#include <stdio.h>
void main()
{
  int age;
  printf("enter your age : ");
  scanf("%d", &age); // 17
  age >= 18 ? printf("you are eligible") : printf("you are not eligible");
}