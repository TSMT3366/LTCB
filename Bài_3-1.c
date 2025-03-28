#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>

void nhap_mang_1 (int a[10])
{
    for (int i=0; i<10; i++)
    {
        scanf ("%d", &a[i]);
    }
}
void xuat_mang_1 (int a[10])
{
    for (int i=0; i<10; i++)
    {
        printf ("%3d", a[i]);
    }
    printf("\n");
}
int main()
{
    int a[10];
    nhap_mang_1(a);
    xuat_mang_1(a);
    return 0;
}