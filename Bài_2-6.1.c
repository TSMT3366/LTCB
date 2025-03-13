#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int tim_GCD (int a, int b)
{
    int c = abs(a);
    int d = abs(b);
    int r;
    while (d != 0)
    {
        r = c % d;
        c = d;
        d = r;
    }
    return c;
}
int tim_LCM (int a, int b)
{
    return ((a/tim_GCD(a, b))*b);
}
int main()
{
    int a, b;
    printf("Hay nhap vao 2 so nguyen bat ki: ");
    scanf("%d %d", &a, &b);
    printf("Uoc chung lon nhat cua 2 so nguyen do la: %d\nBoi chung nho nhat cua 2 so nguyen do la: %d\n", tim_GCD(a, b), tim_LCM(a, b));
    return 0;
}
