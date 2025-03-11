#include <stdio.h>
#include <string.h>
union pen
{
    char c_name[8];
    int price;
    float rating;
};
void main()
{
    union pen p1;
    printf("size of p1 : %d\n", sizeof(p1));
    strcpy(p1.c_name, "cello");
    printf("pen name : %s\n", p1.c_name);
    p1.price = 5;
    printf("pen price : %d\n", p1.price);
    p1.rating = 3.4;
    printf("pen rating : %.1f\n", p1.rating);
}