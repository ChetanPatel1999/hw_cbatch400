#include <stdio.h>
void main()
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num); // 6
    if (num == 1)
    {
        printf("good morning");
    }
    if (num == 2)
    {
        printf("good after noon");
    }
    if (num == 3)
    {
        printf("good evening");
    }
    if (num == 4)
    {
        printf("good night");
    }
    if (num > 4)
    {
        printf("please enter number less than 5");
    }
}