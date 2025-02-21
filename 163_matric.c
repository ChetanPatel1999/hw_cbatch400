// example of 2 d array or matrix
#include <stdio.h>
void main()
{
    int mat[3][2] = {{12, 45}, {56, 77},{33,44}};
    int i, j;
    printf("matrix element are : \n");
    for (i = 0; i < 3; i++) // i= 0
    {
        for (j = 0; j < 2; j++) // j= 0
        {
            printf("%d ", mat[i][j]);
        }
         printf("\n");
    }
}