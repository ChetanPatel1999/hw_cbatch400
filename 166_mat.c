// wap to dispaly matrix average.
#include <stdio.h>
void displaymat(int r, int c, int mat[r][c])
{
    int i, j;
    for (i = 0; i < r; i++) // i= 0
    {
        for (j = 0; j < c; j++) // j= 0
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
void scanmat(int r, int c, int mat[r][c])
{
    int i, j;
    for (i = 0; i < r; i++) // i= 0
    {
        for (j = 0; j < c; j++) // j= 0
        {
            printf("enter element pos mat[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}
void main()
{
    int r, c;
    printf("enter row for matrix : ");
    scanf("%d", &r);
    printf("enter column for matrix : ");
    scanf("%d", &c);
    int mat1[r][c], mat2[r][c], matsum[r][c];
    int i, j;
    printf("enter matrix1 element : \n");
    scanmat(r, c, mat1);
    printf("enter matrix2 element : \n");
    scanmat(r, c, mat2);
    printf("matrix1 element are : \n");
    displaymat(r, c, mat1);
    printf("matrix2 element are : \n");
    displaymat(r, c, mat2);

    // code for addition of two matrix
    for (i = 0; i < r; i++) // i= 0
    {
        for (j = 0; j < c; j++) // j= 1
        {
            matsum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("sum mat element are : \n");
    displaymat(r, c, matsum);
}