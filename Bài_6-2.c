#include <stdio.h>
#include <stdlib.h>
void in_MT (int a[])
{
    for (int i=0; i<10; i++)
    {
        printf ("%5d", a[i]);
    }
    printf ("\n");
}
int main()
{
    int A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    in_MT(A);
    return 0;
}