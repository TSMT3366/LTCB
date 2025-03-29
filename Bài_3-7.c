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
void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bai_7 (int a[LEN])
{
    for (int i=LEN-1; i>0; i--)
    {
        for (int j=0; j<i; j++)
        {
            if (a[j] > a[j+1])
            {
                swap(&a[j], &a[j+1]);
            }
        }
    }
}
void xuat_mang_1 (int a[LEN])
{
    for (int i=0; i<LEN; i++)
    {
        printf ("%d\t", a[i]);
    }
    printf ("\n");
}
int main()
{
    int a[LEN];
    nhap_mang_1(a);
    bai_7(a);
    xuat_mang_1(a);
    return 0;
}