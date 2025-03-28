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
void xuat_mang_1 (int a[LEN])
{
    for (int i=0; i<LEN; i++)
    {
        printf ("%3d", a[LEN-1-i]);
    }
    printf("\n");
}
int main()
{
    int a[LEN];
    nhap_mang_1(a);
    xuat_mang_1(a);
    return 0;
}