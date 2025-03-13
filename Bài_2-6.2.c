#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void input (int *a)
{
    printf("Ban hay nhap 1 so nguyen duong bat ki: ");
    scanf("%d", a);
    while(*a <= 0)
    {
        printf("\nGia tri khong hop le.\nVui long nhap lai: ");
        scanf("%d", a);
    }
}
void kt_so_hoan_hao (int a)
{
    int sum = 0;
    for (int i=1; i<=a; i++)
    {
        if (a%i == 0)
        {
            sum += i;
        }
    }
    if (sum/2 == a)
    {
        printf("%d la so hoan hao.\n", a);
    }
    else
        printf("%d khong la so hoan hao.\n", a);
}
int main()
{
    int a;
    input(&a);
    kt_so_hoan_hao(a);
    return 0;
}
