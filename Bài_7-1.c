#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double x;
    printf("Hay nhap diem trung binh (DTB) cua ban: ");
    scanf("%lf", &x);
    printf("\n");
    while (x>10 || x<0)
    {
        printf("Gia tri khong hop le.\nVui long nhap lai: ");
        scanf("%lf", &x);
        printf("\n");
    }
    if (x < 5)
    {
        printf("Xep loai: Yeu");
    }
    else if (x>=5 && x<7)
    {
        printf("Xep loai: Trung binh");
    }
    else if (x>=7 && x<8)
    {
        printf("Xep loai: Kha");
    }
    else if (x>=8 && x<9)
    {
        printf("Xep loai: Gioi");
    }
    else
    {
        printf("Xep loai: Xuat sac");
    }
    return 0;
}