#include <stdio.h>
#include <stdlib.h>
void hoan_doi (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void in_MT (int *a)
{
    for (int i=0; i<9; i++)
    {
        printf ("%5d", a[i]);
    }
    printf ("\n");
}
int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    in_MT(&A);
    int a, b;
    printf ("Chon 2 vi tri muon hoan doi: ");
    scanf ("%d %d", &a, &b);
    hoan_doi(&A[a], &A[b]);
    in_MT(&A);
    return 0;
}
