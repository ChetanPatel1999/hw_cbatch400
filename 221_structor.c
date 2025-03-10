#include <stdio.h>
#include <string.h>
struct pen
{
    char c_name[20];
    int price;
    float rating;
};
void above_5pen(struct pen peninfo[], int s)
{
    int i;
    printf("pen names above 5 rupees: \n");
    for (i = 0; i < s; i++)
    {
        if (peninfo[i].price > 5)
        {
            printf("%s\n", peninfo[i].c_name);
        }
    }
}
void main()
{
    int n;
    printf("enter struct array size : ");
    scanf("%d", &n);
    struct pen p[n];
    int i;
    for (i = 0; i < n; i++) // 1
    {
        printf("enter p%d info : \n", i + 1);
        printf("enter p%d c_name : ", i + 1);
        scanf("%s", p[i].c_name);
        printf("enter p%d price : ", i + 1);
        scanf("%d", &p[i].price);
        printf("enter p%d rating : ", i + 1);
        scanf("%f", &p[i].rating);
    }
    printf("\n");
    for (i = 0; i < n; i++) // 1
    {
        printf("pen%d info: \n", i + 1);
        printf("pen name : %s\n", p[i].c_name);
        printf("pen price : %d\n", p[i].price);
        printf("pen rating : %.1f\n", p[i].rating);
        printf("____________________________________\n");
    }
    above_5pen(p, n);
}