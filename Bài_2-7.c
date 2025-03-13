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

int main()
{
    int a;
    input(&a);
    double S = 0;
    for (int i=1; i<=a; i++)
    {
        S += 1/(float)i;
    }
    printf("S = 1 + 1/2 + 1/3 + ... + 1/N = %lf\n", S);
    return 0;
}
