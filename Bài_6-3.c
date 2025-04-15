#include <stdio.h>
#include <stdlib.h>
#define LEN 10

void nhap_MT (int a[])
{
    for (int i=0; i<LEN; i++)
    {
        scanf("%d", &a[i]);
    }
}

void min_max_value (int a[])
{
    int i, max = a[1], min = a[1];
    for (i=0; i<LEN; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        if (min > a[i])
        {
            min = a[i];
        }
    }
    printf ("Gia tri lon nhat la: %d\n", max);
    printf ("Gia tri nho nhat la: %d\n", min);
}


int main()
{
    int a[LEN];
    printf ("Nhap 10 gia tri bat ky vao mang:\n");
    nhap_MT(a);
    min_max_value(a);
    return 0;
}