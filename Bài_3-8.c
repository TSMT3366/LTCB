#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>

#define LEN_A 3
#define LEN_B 6

void nhap_mang_1 (int a[], int len)
{
    for (int i=0; i<len; i++)
    {
        scanf ("%d", &a[i]);
    }
}
void bai_8 (int a[LEN_A], int b[LEN_B])
{
    int i=0, j=0;
    while (i < LEN_A && j < LEN_B)
    {
        if (b[j] > a[i])
        {
            printf("%d ", a[i]);
            i++;
        }
        if (b[j] < a[i])
        {
            printf("%d ", b[j]);
            j++;
        }
    }
    while (i < LEN_A)
    {
        printf("%d ", a[i]);
        i++;
    }
    while (j < LEN_B)
    {
        printf("%d ", b[j]);
        j++;
    }
}

int main()
{
    int a[LEN_A], b[LEN_B];
    nhap_mang_1(a, LEN_A);
    nhap_mang_1(b, LEN_B);
    bai_8(a, b);
    return 0;
}