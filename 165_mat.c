// wap to dispaly matrix average.
#include <stdio.h>
void main()
{
    int r, c;
    printf("enter row for matrix : ");
    scanf("%d", &r);
    printf("enter column for matrix : ");
    scanf("%d", &c);
    int mat[r][c];
    int i, j;
    printf("enter matrix element : \n");
    for (i = 0; i < r; i++) // i= 0
    {
        for (j = 0; j < c; j++) // j= 0
        {
            printf("enter element pos mat[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("matrix element are : \n");
    for (i = 0; i < r; i++) // i= 0
    {
        for (j = 0; j < c; j++) // j= 0
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    // sum all element of matrix
    int sum = 0;
    for (i = 0; i < r; i++) // i= 0
    {
        for (j = 0; j < c; j++) // j= 0
        {
            sum = sum + mat[i][j];
        }
    }
    printf("sum of all matrix element is : %d\n", sum);
    float average = (float)sum / (r * c);
    printf("average of all matrix element is : %.2f\n", average);
}