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
void bai_6 (int a[LEN])
{
    for (int i=0; i<LEN; i++)
    {
        if (a[i] < 0)
        {
            a[i] = 0;
        }
        printf ("%3d", a[i]);
    }
}
int main()
{
    int a[LEN];
    nhap_mang_1(a);
    bai_6(a);
    return 0;
}