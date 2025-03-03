// wap to print a msg 5 times using recursion
#include <stdio.h>
int i = 1; // global variable
void fun()
{
    printf("hi i am fun\n"); // 5
    i++;                     // 6
    if (i <= 5)
    {
        fun();
    }
}
void main()
{
    fun();
}