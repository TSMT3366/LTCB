#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>

#define LEN 10

void nhap_mang_1 (int a[LEN])
{
    for (int i=0; i<LEN; i++)
    {
        scanf ("%d", &a[i]);
    }
}

void bai_3 (int a[LEN])
{
    double S = 0, pos_S = 0, neg_S = 0;
    int pos = 0, neg = 0;
    for (int i=0; i<LEN; i++)
    {
        S += a[i];
        if (a[i] < 0)
        {
            neg_S += a[i];
            neg++;
        }
        if (a[i] > 0)
        {
            pos_S += a[i];
            pos++;
        }
    }
    printf ("Tong cua tat ca cac so tren la: %.0lf\n", S);
    printf ("Tong cua tat ca cac so nguyen duong la: %.0lf\n", pos_S);
    printf ("Tong cua tat ca cac so nguyen am la: %.0lf\n", neg_S);
    printf ("Trung binh cong cua ca mang tren la: %lf\n", S/LEN);
    printf ("Trung binh cong cua cac so nguyen duong la: %lf\n", pos_S/pos);
    printf ("Trung binh cong cua cac so nguyen am la: %lf\n", neg_S/neg);
}
int main()
{
    int a[LEN];
    nhap_mang_1(a);
    bai_3(a);
    return 0;
}