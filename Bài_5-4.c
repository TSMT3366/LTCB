#include <stdio.h>
#include <stdlib.h>

void ve_xoan_oc (int **a, int n)
{
    int i, j, k=1, c=0;
    while (k <= n*n)
    {
        for (j=c; j<n-c; j++)
        {
            if (k <= n*n)
            {
                a[c][j] = k++;
            }
        }
        for (i=c+1; i<n-c; i++)
        {
            if (k <= n*n)
            {
                a[i][n-1-c] = k++;
            }
        }
        for (j=n-2-c; j>=c; j--)
        {
            if (k <= n*n)
            {
                a[n-1-c][j] = k++;
            }
        }
        for (i=n-2-c; i>=c+1; i--)
        {
            if (k <= n*n)
            {
                a[i][c] = k++;
            }
        }
        c++;
    }
}
void in_MT(int **a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}

int** tao_ma_tran(int n)
{
    int **a = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        a[i] = (int *)malloc(n * sizeof(int));
    }
    return a;
}

int main()
{
    int n;
    printf("Nhap kich thuoc ma tran A (n x n): ");
    scanf("%d", &n);
    int **a = tao_ma_tran(n);
    ve_xoan_oc(a, n);
    in_MT(a, n);
    return 0;
}