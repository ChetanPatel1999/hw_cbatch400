//with return type no argument
#include <stdio.h>
int add()
{
    int a,b;
    printf("enter two number : ");
    scanf("%d%d",&a,&b);
    return (a + b);
}
void main()
{
    int res = add();
    printf("sum = %d\n", res);
    printf("sum = %d\n", add());
    printf("sum = %d\n", add());
}