#include <stdlib.h>
#include <stdio.h>

#define N 5
#define M 6

void matrix_print(int **mat, int n, int m)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("row i %i", i);
        for (int j = 0; j < m; j++)
        {

            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void matrix_free(int **mat, int n, int m)
{

    for (int i = 0; i < n; i++)
    {
        free(mat[i]);
    }
    free(mat);
}
int **matrix_create_new(int n, int m)
{
    int **A = (int **)malloc(sizeof(int *) * n); // <- the main array - pointer to the sub arrays
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        printf("row %i", i);
        A[i] = (int *)malloc(sizeof(int) * m);
        for (int j = 0; j < m; j++)
        {
            A[i][j] = k++;
        }
    }
    printf("done new");
    return A;
}

void matrix_swap_rows(int **mat, int n, int row1, int row2)
{

    if (row1 > n - 1 || row2 > n - 1)
    {
        printf("Wrong Val r:1:%i r2:%i size:%i", row1, row2, n);
        exit(-1);
    }
    int *temp_row = mat[row1];
    mat[row1] = mat[row2];
    mat[row2] = temp_row;
}
void swap(int*a,int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void matrix_swap_cols(int **mat, int m,int n, int col1, int col2)
{

    if (col1 > m - 1 || col2 > m - 1)
    {
        printf("Wrong Val r:1:%i r2:%i size:%i", col1, col2, m);
        exit(-1);
    }
    for (int i=0;i<n;i++)
    {   
        printf("-------\n");
        printf("v1:%i  v2:%i\n",mat[i][col1],mat[i][col2]);
        swap(&mat[i][col1],&mat[i][col2]);
        printf("v1:%i  v2:%i\n",mat[i][col1],mat[i][col2]);

    }
}

int main()
{
    printf("start?");

    int **matrix = matrix_create_new(N, M);
    matrix_print(matrix, N, M);
    matrix_swap_rows(matrix, N, N / 2, N - 1);
    matrix_print(matrix, N, M);
    matrix_swap_cols(matrix,M,N,1,2);
    matrix_print(matrix, N, M);
    matrix_free(matrix, N, M);
    return 0;
}