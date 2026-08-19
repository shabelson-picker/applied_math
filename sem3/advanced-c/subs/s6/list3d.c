#include <stdio.h>
#include <stdlib.h>

#define N 12

void freedin_matrix(int **a, int rows)
{
    for (int row = 0; row < rows; row++)
    {
        free(a[row]);
    }
    free(a);
}

void print_static_matric(int mat[][N], int rows)
{
    for (int i = 0; i < rows; i++)

    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void static_2dlist(int rows)
{
    int a[rows][N];
    int k = 0;
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < N; col++)
            a[row][col] = k++;
        k = row * 100;
    }
    print_static_matric(a, rows);
}
void print_dynamic_2d_list(int *mat[], int rows, int cols)
{
    for (int i = 0; i < rows; i++)

    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void semi_dynamic_2dlist(int rows, int cols)
{

    int *a[rows];
    int k = 0;
    for (int row = 0; row < rows; row++)
    {
        a[row] = (int *)calloc(cols, sizeof(int));
        for (int col = 0; col < cols; col++)
        {
            a[row][col] = k++;
        }
    }
    print_dynamic_2d_list(a, rows, cols);
}

void full_dyn_array(int rows, int cols)
{

    int **a;
    int k = 0;
    a = (int **)calloc(rows, sizeof(int *));
    if (!a)
        return;
    for (int row = 0; row < rows; row++)
    {
        a[row] = (int *)calloc(cols, sizeof(int));
        if (!a[row])
        {
            freedin_matrix(a, row);
        }
        for (int col = 0; col < cols; col++)
        {
            a[row][col] = k++;
        }
    }
    print_dynamic_2d_list(a, rows, cols);
}

int **get_full_dyn_array(int rows, int cols)
{

    int **a;
    int k = 0;
    a = (int **)calloc(rows, sizeof(int *));
    if (!a)
        return NULL;
    for (int row = 0; row < rows; row++)
    {
        a[row] = (int *)calloc(cols, sizeof(int));
        if (!a[row])
        {
            freedin_matrix(a, row);
        }
        for (int col = 0; col < cols; col++)
        {
            a[row][col] = k++;
        }
    }
    print_dynamic_2d_list(a, rows, cols);
    return a;
}

void matrix_addition(int **a, int **b, int n, int m, int **res)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            res[i][j] = a[i][j] + b[i][j];
}

void add_matrix_exe(int n, int m)
{
    int **a = get_full_dyn_array(n, m);
    int **b = get_full_dyn_array(n, m);
    int **c = get_full_dyn_array(n, m);
    printf("----------\n");
    matrix_addition(a,b,n,m,c);
    print_dynamic_2d_list(c,n,m);
}

int main()
{

    add_matrix_exe(5,9);
    return 0;
}
