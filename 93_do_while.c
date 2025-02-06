// continue calculater
#include <stdio.h>
void main()
{
    int num, a, b, c;
    do
    {
        printf("welcome to my calculater :\n");
        printf("press 1 for add :\n");
        printf("press 2 for sub :\n");
        printf("press 3 for mul :\n");
        printf("press 4 for div :\n");
        printf("press 5 for exit :\n");//
        printf("choose a opation : ");
        scanf("%d", &num); //5
        switch (num)
        {
        case 1:
            printf("addition programm :\n");
            printf("enter frist num :\n");
            scanf("%d", &a);
            printf("enter second num :\n");
            scanf("%d", &b);
            c = a + b;
            printf("%d + %d = %d \n", a, b, c);
            break;
        case 2:
            printf("subtraction programm :\n");
            printf("enter frist num :\n");
            scanf("%d", &a);
            printf("enter second num :\n");
            scanf("%d", &b);
            c = a - b;
            printf("%d - %d = %d \n", a, b, c);
            break;
        case 3:
            printf("multiplication programm :\n");
            printf("enter frist num :\n");
            scanf("%d", &a);
            printf("enter second num :\n");
            scanf("%d", &b);
            c = a * b;
            printf("%d * %d = %d \n", a, b, c);
            break;
        case 4:
            printf("division programm :\n");
            printf("enter frist num :\n");
            scanf("%d", &a);
            printf("enter second num :\n");
            scanf("%d", &b);
            c = a / b;
            printf("%d / %d = %d \n", a, b, c);
            break;
        case 5: break;    
        default:
            printf("enter number 1 to 5\n");
            break;
        }
       
    } while (num!=5);
}