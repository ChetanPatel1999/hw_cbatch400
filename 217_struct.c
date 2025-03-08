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
    strcpy(p1.c_name, "cello");
    p1.price = 5;
    p1.rating = 3.4;
    
    strcpy(p2.c_name, "pentonic");
    p2.price = 10;
    p2.rating = 4.5;
    printf("pen1 info: \n");
    printf("pen name : %s\n", p1.c_name);
    printf("pen price : %d\n", p1.price);
    printf("pen rating : %.1f\n", p1.rating);

    printf("pen2 info: \n");
    printf("pen name : %s\n", p2.c_name);
    printf("pen price : %d\n", p2.price);
    printf("pen rating : %.1f\n", p2.rating);
}