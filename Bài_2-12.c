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
        scanf("%lf", b);
    }
}

void bai_12 (double x, double esp)
{
    printf("Sin(%0.lf) = ", x);
    x = x*3.14/180;
    double Sin = 0;
    int i = 0, k = 1, n = 1;
    do
    {
        for (int j=1; j<=2*i+1; j++)
        {
            k *= j;
        }
        n = pow(-1,i) * ((pow(x, 2*i+1))/k);
        Sin += n;
        i++;
    }
    while (n>esp);
    printf("%lf", Sin);
}
int main()
{
    double esp, x;
    input(&x, &esp);
    bai_12(x, esp);
    return 0;
}
