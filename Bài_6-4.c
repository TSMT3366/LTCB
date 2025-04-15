#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define LEN 10

void nhap_MT (int *a)
{
    for (int i=0; i<LEN; i++)
    {
        scanf("%d", &a[i]);
    }
}

void in_MT (int *a)
{
    for (int i=0; i<LEN; i++)
    {
        printf("%d", a[i]);
        if (i!=LEN-1)
        {
            printf ("\t");
        }
    }
    printf("\n");
}

void hoan_doi (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubble_sort (int *a)
{
    int i, j;
    for (i=LEN-1; i>0; i--)
    {
        for (j=0; j<LEN-1; j++)
        {
            if (a[j] > a[j+1])
            {
                hoan_doi(&a[j], &a[j+1]);
            }
        }
    }
}
int main()
{
    int *a = (int*)malloc(LEN*sizeof(int));
    printf ("Nhap 10 gia tri bat ky vao mang:\n");
    nhap_MT(a);
    bubble_sort(a);
    in_MT(a);
    return 0;
}