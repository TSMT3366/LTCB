#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>

void input (double *a, double *b)
{
    printf("Ban hay nhap tong thu nhap GDP va toc do tang truong kinh te binh quan: ");
    scanf("%lf", a);
    scanf("%lf", b);
    while(*a < 0)
    {
        printf("\nGia tri GDP khong hop le.\nVui long nhap lai: ");
        scanf("%lf", a);
    }
}

void bai_14 (double GDP, double v)
{
    int y = 2014;
    double GDP_2014 = GDP;
    printf("Nam\t\tGDP\n");
    printf("%d\t\t%.1lf\n", y++, GDP_2014);
    while (GDP <= 2*GDP_2014)
    {
        GDP = GDP + GDP*v/100;
        printf("%d\t\t%.1lf\n", y++, GDP);
    }
}
int main()
{
    double GDP, v;
    input(&GDP, &v);
    bai_14(GDP, v);
    return 0;
}