#include <stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr;
    ptr = (int *)malloc(20); // NULL
    if (ptr == NULL)
    {
        printf("dyanamic memory is not allocate");
    }
    else
    {
        printf("dyanamic memory is  allocate");
    }
}