#include <stdio.h>
#include <stdlib.h>
void nhap_mang (int a[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void in_MT(int a[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    in_MT(a);
    nhap_mang(a);
    in_MT(a);
    return 0;
}