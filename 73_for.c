// wap to print sum all element in given range.
#include <stdio.h>
void main()
{
    int i, s = 10, e = 15;
    float avg, sum = 0;
    for (i = s; i <= e; i++) // 11
    {
        sum += i; // 55 sum=sum+i;
    }
    avg = sum / ((e - s) + 1);
    printf("sum of %d to %d : %.2f\n", s, e, sum);
    printf("avrage of %d to %d : %.2f", s, e, avg);
}