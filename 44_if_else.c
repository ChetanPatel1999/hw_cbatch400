// wap to check voter is eligible for casting vote or note.
#include <stdio.h>
void main()
{
    int age;
    printf("enter your age : ");
    scanf("%d", &age);//12
    if (age >= 18)
    {
       printf("he/she is eligible for casting vote");
    }
    else
    {
      printf("he/she is not eligible for casting vote");
    }
}