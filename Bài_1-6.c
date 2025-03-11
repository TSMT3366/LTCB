#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a,b,c,d,e,f;
    printf("Ban hay nhap he so cua phuong trinh thu nhat: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("Ban hay nhap he so cua phuong trinh thu hai: ");
    scanf("%lf %lf %lf",&d,&e,&f);
    printf("\n");
    double det = (a*e) - (b*d);
    if (det == 0)
    {
        if (((a * f) == (d * c)) && ((b * f) == (e * c)))
        {
            printf("He phuong trinh co vo so nghiem");
        }
        else
        {
            printf("He phuong trinh vo nghiem");
        }
    }
    else
    {
        printf("He phuong trinh co nghiem duy nhat\n");
        printf("x = %.05lf\ny = %.05lf",((e * c - b * f) / det),((a * f - d * c) / det));
    }
    return 0;
}
