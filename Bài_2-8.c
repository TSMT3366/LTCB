#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void input (int *a)
{
    printf("Ban hay nhap 1 so nguyen duong bat ki: ");
    scanf("%d", a);
    while(*a <= 0)
    {
        printf("\nGia tri khong hop le.\nVui long nhap lai: ");
        scanf("%d", a);
    }
}

int main()
{
    int a;
    input(&a);
    int S = 1;
    for (int i=1; i<=a; i++)
    {
        S *= i;
    }
    printf("%d! = %d\n", a, S);
    return 0;
}
