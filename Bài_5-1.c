#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a, b, c;
    printf("Ban hay nhap he so cua phuong trinh bac hai: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double delta = pow(b,2)-(4*a*c);
    if (a!=0)
    {
        if (delta>0)
        {
            printf("Phuong trinh co 2 nghiem phan biet\n");
            printf("x1 = %.5lf\n",(((-b)-sqrt(delta))/(2*a)));
            printf("x2 = %.5lf\n",(((-b)+sqrt(delta))/(2*a)));
        }
        else if (delta<0)
        {
            printf("Phuong trinh vo nghiem");
        }
        else
        {
            printf("Phuong trinh co nghiem kep\n");
            printf("x1 = x2 = %.5lf",((-b)/(2*a)));
        }
    }
    else
    {
        if (b==0)
        {
            if (c==0)
            {
                printf("Moi x la nghiem");
            }
            else
            {
                printf("Phuong trinh vo nghiem");
            }
        }
        else
        {
            printf("Phuong trinh co 1 nghiem don\n");
            printf("x = %.5lf",((-c)/b));
        }
    }
 
    return 0;
}