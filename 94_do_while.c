// clube mini project
#include <stdio.h>
void main()
{
    int age, num, p,total_bill=0;
    printf("enter your age  : ");
    scanf("%d", &age); // 2008
    if (age >= 18)
    {
        printf("welcome to clube :\n");
        do
        {
            printf("clube menue ....\n");
            printf("1. sandwitch : 120\n");
            printf("2. pasta : 100\n");
            printf("3. noodles : 80\n");
            printf("choose option :");
            scanf("%d", &num); // 3
            switch (num)
            {
            case 1:
                total_bill=total_bill+120;
                printf("your sandwitch is ordered and your total bill %d\n",total_bill);
                break;
            case 2:
                total_bill=total_bill+100;
                printf("your pasta is ordered and your total bill %d\n",total_bill);
                break;
            case 3:
                total_bill=total_bill+80;
                printf("your noodles is ordered and your total bill %d\n",total_bill);
                break;
            default:
                printf("please enter 1 to 3 ");
            }
            printf("\nsir you want to order something more so press 1 : ");
            scanf("%d", &p);
        } while (p == 1);
    }
    else
    {
        printf("you are not adult ! please try after %d year", 18 - age);
    }
    printf("\nthank you ! visit again");
}