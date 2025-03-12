// with return type with argument
#include <stdio.h>
int add(int a, int b)
{
    return (a + b);
}
void main()
{
    int x = 5, y = 9;
    int res = add(7, 9);
    printf("sum = %d\n", res);
    printf("sum = %d\n", add(34,89));
    printf("sum = %d\n", add(x, y));

}