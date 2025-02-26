// example of 2 d array or matrix
#include <stdio.h>
void main()
{
    int mat[3][3] = {{12, 45, 67}, {56, 77, 88}, {11, 44, 66}};
    int i, j;
    printf("matrix element are : \n");
    for (i = 0; i < 3; i++) // i= 1
    {
        for (j = 0; j < 3; j++) // j= 3
        {
            printf("%d ", mat[i][j]);
        }
         printf("\n");
    }
}