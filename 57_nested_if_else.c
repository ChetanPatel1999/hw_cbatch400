// wap to check voter is eligible to casting vote in india.
#include <stdio.h>
void main()
{
    int age;
    char country;
    printf("enter \"i\" if you are indian : ");
    scanf("%c", &country);
    if (country == 'i')
    {
        printf("enter your age : ");
        scanf("%d", &age);
        if (age >= 18)
        {
            printf("you are eligible");
        }
        else
        {
            printf("you are not eligible");
        }
    }
    else
    {
        printf("you are not indian so you cant vote");
    }
}