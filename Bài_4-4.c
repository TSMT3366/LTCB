#include <stdio.h>
#include <stdlib.h>

void nhap_MT(int **a, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void in_MT(int **a, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}

int** tao_ma_tran(int m, int n)
{
    int **a = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        a[i] = (int *)malloc(n * sizeof(int));
    }
    return a;
}

void free_ma_tran(int **a, int m)
{
    for (int i = 0; i < m; i++)
    {
        free(a[i]);
    }
    free(a);
}

void cong_MT(int **a, int m, int n, int **b)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] += b[i][j];
        }
    }
}

int** nhan_MT(int **a, int m, int n, int **b, int p)
{
    int **result = tao_ma_tran(m, p);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return result;
}

int main()
{
    int i, j;
    printf("Nhap kich thuoc ma tran A (m x n): ");
    scanf("%d %d", &i, &j);
    int **a = tao_ma_tran(i, j);
    printf("Nhap ma tran A:\n");
    nhap_MT(a, i, j);

    int m, n;
    printf("Nhap kich thuoc ma tran B (m x n): ");
    scanf("%d %d", &m, &n);
    int **b = tao_ma_tran(m, n);
    printf("Nhap ma tran B:\n");
    nhap_MT(b, m, n);

    if (i == m && j == n)
    {
        cong_MT(a, i, j, b);
        printf("Tong ma tran A va B:\n");
        in_MT(a, i, j);
    }
    else
    {
        printf("Khong the thuc hien phep cong ma tran.\n");
    }

    if (j == m)
    {
        int **result = nhan_MT(a, i, j, b, n);
        printf("Tich ma tran A va B:\n");
        in_MT(result, i, n);
        free_ma_tran(result, i);
    }
    else
    {
         printf("Khong the thuc hien phep nhan ma tran.\n");
    }

    free_ma_tran(a, i);
    free_ma_tran(b, m);
    return 0;
}