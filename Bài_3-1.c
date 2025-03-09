#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void input (int *a)
{
    scanf("%d", a);
}
void NX(int a, int b)
{
    if (b == 0)
    {
        printf("=> Khong the kiem tra, b = 0\n");
    }
    else if (a % b != 0)
    {
        printf("=> a khong chia het cho b\n");
    }
    else
    {
        printf("=> a chia het cho b\n");
    }
}
int main()
{
    int a, b;
    printf("Ban hay nhap vao 2 so nguyen a & b: ");
    input(&a);
    input(&b);
    printf("a + b = %d\n", a+b);
    printf("a - b = %d\n", a-b);
    printf("a * b = %d\n", a*b);
    if (b != 0)
    {
        printf("a / b = %lf\n", (double)a / b);
    }
    else
    {
        printf("=> Khong the chia cho 0\n");
    }
    NX(a, b);
    return 0;
}