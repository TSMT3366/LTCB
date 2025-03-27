#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>

void input (double *a, int *b)
{
    printf("Ban hay nhap so tien gui va so thang: ");
    scanf("%lf", a);
    scanf("%d", b);
    while(*a <= 0)
    {
        printf("\nGia tri khong hop le.\nVui long nhap lai: ");
        scanf("%lf", a);
    }
    while(*b <= 0)
    {
        printf("\nGia tri khong hop le.\nVui long nhap lai: ");
        scanf("%d", b);
    }
}

void bai_15 (double m, int n)
{
    double l = 0.45/100;
    for (int i=0; i<n; i++)
    {
        m = m + l*m;
    }
    printf("Sau %d thang, nguoi do rut duoc %lf VND.\n", n, m);
}
int main()
{
    double m;
    int n;
    input(&m, &n);
    bai_15(m, n);
    return 0;
}