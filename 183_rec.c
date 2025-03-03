// wap to print a msg 5 times using recursion.
#include <stdio.h>
void fun()
{
    static int i = 1;        // its run only once time in programm
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