#include <stdio.h>
void fun3();
void fun1()
{
    printf("fun1 is called\n");
}
void fun2()
{
    fun1();
    fun3();
    printf("fun2 is called\n");
}
void fun3()
{
    fun1();
    printf("fun3 is called\n");
}
void main()
{
    printf("main function start ..\n");
    fun2();
    printf("main function end ..\n");
}
