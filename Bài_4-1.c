#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979323846

int main()
{
    double r;
    printf("Ban hay nhap vao ban kinh r cua hinh cau: ");
    scanf("%lf", &r);
    printf("\n");
    while (r <=0)
    {
        printf("Gia tri khong hop le.\nVui long nhap lai: ");
        scanf("%lf", &r);
        printf("\n");
    }
    printf("Dien tich mat cau la: S = %lf\n", 4*PI*pow(r, 2));
    printf("The tich hinh cau la: V = %lf\n", (4.0/3.0)*PI*pow(r, 3));
    return 0;
}
