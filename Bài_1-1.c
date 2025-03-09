#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double x;
    printf("Ban hay nhap mot so x bat ki: ");
    scanf ("%lf", &x);
    printf("x\^2 = %lf\n", pow(x, 2));
    printf("x\^3 = %lf\n", pow(x, 3));
    printf("x\^4 = %lf\n", pow(x, 4));
}