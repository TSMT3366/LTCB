#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>

void input (double *a, double *b)
{
    printf("Ban hay nhap mot so x va do chinh xac esp: ");
    scanf("%lf", a);
    scanf("%lf", b);
    while(*b < 0)
    {
        printf("\nGia tri esp khong hop le.\nVui long nhap lai: ");
        scanf("%d", b);
    }
}

void bai_13 (double x, double esp)
{
    printf("e mu %0.lf = ", x);
    double y = 1;
    int i = 0, k = 1, n;
    do
    {
        for (int j=1; j<=i; j++)
        {
            k *= j;
        }
        n = pow(x,i)/k;
        y += n;
        i++;
    }
    while (n>esp);
    printf("%lf", y);
}
int main()
{
    double esp, x;
    input(&x, &esp);
    bai_13(x, esp);
    return 0;
}