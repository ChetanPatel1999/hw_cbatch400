#include <stdio.h>
#include <string.h>
struct pen
{
    char c_name[20];
    int price;
    float rating;
};
void main()
{
    struct pen p1, p2, p3;
    printf("enter p1 info : \n");
    printf("enter p1 c_name : ");
    scanf("%s",p1.c_name);
    printf("enter p1 price : ");
    scanf("%d",&p1.price);
    printf("enter p1 rating : ");
    scanf("%f",&p1.rating);

    printf("enter p2 info : \n");
    printf("enter p2 c_name : ");
    scanf("%s",p2.c_name);
    printf("enter p2 price : ");
    scanf("%d",&p2.price);
    printf("enter p2 rating : ");
    scanf("%f",&p2.rating);



    printf("pen1 info: \n");
    printf("pen name : %s\n", p1.c_name);
    printf("pen price : %d\n", p1.price);
    printf("pen rating : %.1f\n", p1.rating);

    printf("pen2 info: \n");
    printf("pen name : %s\n", p2.c_name);
    printf("pen price : %d\n", p2.price);
    printf("pen rating : %.1f\n", p2.rating);
}