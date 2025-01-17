// clube mini project
#include <stdio.h>
void main()
{
    int year, age, num;
    printf("enter your birth year  : ");
    scanf("%d", &year); // 2008
    age = 2025 - year;
    if (age >= 18)
    {
        printf("welcome to clube :\n");
        printf("1. sandwitch : 120\n");
        printf("2. pasta : 100\n");
        printf("3. noodles : 80\n");
        printf("choose option :");
        scanf("%d", &num);
        if (num == 1)
        {
            printf("your sandwitch ordered please pay 120 rs");
        }
        else if (num == 2)
        {
            printf("your pasta ordered please pay 100 rs");
        }
        else if (num == 3)
        {
            printf("your noodles ordered please pay 80 rs");
        }
        else
        {
            printf("please enter 1 to 3 ");
        }
    }
    else
    {
        printf("you are not adult ! please try after %d year", 18 - age);
    }
    printf("\nthank you ! visit again");
}