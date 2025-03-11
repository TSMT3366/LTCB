#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
    double a;
    double b;
    double c;
} TamGiac;
void input (TamGiac *t)
{
    scanf("%lf %lf %lf", &t->a, &t->b, &t->c);
    while (t->a <= 0 || t->b <= 0 || t->c <= 0)
    {
        printf("\nGia tri khong hop le.\nVui long nhap lai: ");
        scanf("%lf %lf %lf", &t->a, &t->b, &t->c);
    }
}
void kt_TamGiac (TamGiac t)
{
    if ((t.a+t.b)<=t.c || (t.a+t.c)<=t.b || (t.b+t.c)<=t.a)
    {
        printf("Day khong phai la tam giac.\n");
    }
    else
    {
        if (t.a==t.b && t.b==t.c && t.a==t.c)
        {
            printf("Day la tam giac deu.\n");
        }
        else if (t.a==t.b || t.b==t.c || t.a==t.c)
        {
            if (pow(t.a,2) + pow(t.b,2) == pow(t.c,2) || pow(t.a,2) + pow(t.c,2) == pow(t.b,2) || pow(t.b,2) + pow(t.c,2) == pow(t.a,2))
            {
                printf("Day la tam giac vuong can.\n");
            }
            else
            {
                printf("Day la tam giac can.\n");
            }
        }
        else if (pow(t.a,2) + pow(t.b,2) == pow(t.c,2) || pow(t.a,2) + pow(t.c,2) == pow(t.b,2) || pow(t.b,2) + pow(t.c,2) == pow(t.a,2))
        {
            printf("Day la tam giac vuong.\n");
        }
        else
        {
            printf("Day la tam giac thuong.\n");
        }
    }
}
void tinh_P (TamGiac t)
{
    printf("Chu vi = %lf\n", t.a+t.b+t.c);
}
void tinh_S (TamGiac t)
{
    double s = (t.a+t.b+t.c)/2;
    printf("Dien tich = %lf\n", sqrt(s * (s - t.a) * (s - t.b) * (s - t.c)));
}
int main()
{
    TamGiac t;
    printf("Ban hay nhap gia tri 3 canh cua tam giac: ");
    input(&t);
    kt_TamGiac(t);
    tinh_P(t);
    tinh_S(t);
    return 0;
}
