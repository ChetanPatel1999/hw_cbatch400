// wap to print student result according to rno.
#include <stdio.h>
void main()
{
    int rno;
    printf("enter rno : ");
    scanf("%d", &rno);
    switch (rno)
    {
    case 1213:
        printf("name of student : mohit rathore\n");
        printf("rno of student : 1213\n");
        printf("per of student : 68\n");
        printf("student : pass\n");
        break;
    case 1214:
        printf("follow above formate\n");
        break;
    default:
        printf("please enter correct rno");
        break;
    }
}