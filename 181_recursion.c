//recursion example
#include<stdio.h>
void fun()
{
    printf("hi i am fun\n");
    fun();//recursive calling
}
void main()
{
  fun();
}