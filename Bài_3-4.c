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
void bai_4 (int a[LEN])
{
    int minValue = a[0], maxValue = a[0];
    for (int i=1; i<LEN; i++)
    {
        if (a[i] < minValue)
        {
            minValue = a[i];
        }
        if (a[i] > maxValue)
        {
            maxValue = a[i];
        }
    }
    printf ("So be nhat la: %d\n", minValue);
    printf ("So lon nhat la: %d\n", maxValue);
}
int main()
{
    int a[LEN];
    nhap_mang_1(a);
    bai_4(a);
    return 0;
}