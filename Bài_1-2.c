#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int sum=0;
    printf("Ban hay nhap 10 so nguyen bat ki: ");
    for (int i=0; i<10; i++)
    {
        int a;
        scanf("%d", &a);
        sum += a;
    }
    printf("Tong cua 10 so nguyen do la: %d\n", sum);
    return 0;
}
