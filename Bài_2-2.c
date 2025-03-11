#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void kt_so_NT (int x)
{
    if (x < 2)
    {
        printf ("%d khong phai so nguyen to\n",x);
        return;
    }
    int a = 1;
    for (int i=2; i<= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            a = 0;
            break;
        }
    }
    if (a == 1)
    {
        printf ("%d la so nguyen to\n",x);
    }
    else
    {
        printf ("%d khong phai so nguyen to\n",x);
    }
}
int main()
{
    int a;
    printf("Ban hay nhap 1 so nguyen bat ki: ");
    scanf("%d", &a);
    kt_so_NT(a);
    return 0;
}
