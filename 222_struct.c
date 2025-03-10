#include <stdio.h>
struct student
{
    char name[30];
    int rno;
    float per;
};
void display_m(struct student s[], int size)
{
    int i;
    printf("student name which start with m :\n");
    for (i = 0; i < size; i++)
    {
        if (s[i].name[0] == 'm')
        {
            printf("%s \n", s[i].name);
        }
    }
}
void main()
{
    int n;
    printf("enter student count : ");
    scanf("%d", &n);
    struct student s[n];
    int i;
    for (i = 0; i < n; i++) // 1
    {
        printf("enter s%d info : \n", i + 1);
        printf("enter s%d name : ", i + 1);
        scanf("%s", s[i].name);
        printf("enter s%d rno : ", i + 1);
        scanf("%d", &s[i].rno);
        printf("enter s%d per : ", i + 1);
        scanf("%f", &s[i].per);
    }
    printf("\n");
    for (i = 0; i < n; i++) // 1
    {
        printf("student%d info: \n", i + 1);
        printf("student name : %s\n", s[i].name);
        printf("student rno : %d\n", s[i].rno);
        printf("student per : %.1f\n", s[i].per);
        printf("____________________________________\n");
    }
    display_m(s, n);
}