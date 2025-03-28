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
void bai_5 (int a[LEN], int x)
{
    int c=0;
    for (int i=0; i<LEN; i++)
    {
        if (x == a[i])
        {
            c++;
        }
    }
    if (c==0)
    {
        printf ("Khong ton tai phan tu %d trong mang tren.\n", x);
    }
    else
    {
        printf ("Phan tu %d xuat hien %d lan trong mang.\n", x, c);
    }
}
int main()
{
    int a[LEN];
    int x;
    nhap_mang_1(a);
    scanf("%d", &x);
    bai_5(a, x);
    return 0;
}