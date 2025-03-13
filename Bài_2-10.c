#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void input (int *a)
{
    printf("Ban muon biet so thu bao nhieu cua day Fibonaci: ");
    scanf("%d", a);
    while(*a <= 0)
    {
        printf("\nGia tri khong hop le.\nVui long nhap lai: ");
        scanf("%d", a);
    }
}
int main()
{
    int n, i, F1, F2, Fi;
    input(&n);
    F1 = 1;
    F2 = 1;
    for (i=3; i<=n; i++)
    {
        Fi = F1 + F2;
        F1 = F2;
        F2 = Fi;
    }
    printf("So Fibonaci thu %d la: %d\n", n, F2);
    return 0;
}
