// type def example
#include <stdio.h>
typedef long long int lli;
typedef int i;
typedef double d;
struct student_of_10th_class
{
    int rno;
    float per;
};
typedef struct student_of_10th_class s10;
void main()
{
    s10 s1;
    i a;
    lli b;
    d c;
    printf("size of int : %d\n", sizeof(a));
    printf("size of long long int : %d\n", sizeof(b));
    printf("size of double : %d\n", sizeof(c));
}