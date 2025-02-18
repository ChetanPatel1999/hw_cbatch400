// wap to find average of students marks.
#include <stdio.h>
void main()
{
    int marks[5] = {50, 70, 60, 75, 20};
    int i;
    printf("student marks are : \n");
    for (i = 0; i < 5; i++) // 1
    {
        printf("%d\n", marks[i]);
    }
    // all students marks sum
    int sum = 0;
    for (i = 0; i < 5; i++) // 2
    {
        sum = sum + marks[i]; // 180
    }
    printf("sum of all marks : %d\n", sum);
    printf("avrage of all marks : %.1f\n", (sum / 5.0));
}