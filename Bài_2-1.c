#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void input (int *a)
{
    scanf("%d", a);
}
int kt_hop_le(int d, int m, int y)
{
    if (y < 1 || m < 1 || d < 1 || m > 12)
    {
        return 0;
    }
    int max_day[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((y % 400 == 0) || (y % 100 != 0 && y % 4 == 0))
    {
        max_day[2] = 29;
    }
    if (d > max_day[m])
    {
        return 0;
    }

    return 1;
}
int main()
{
    int d, m, y;
    printf("Ban hay nhap ngay thang nam: ");
    input(&d);
    input(&m);
    input(&y);
    int kt = kt_hop_le(d, m, y);
    while (kt == 0)
    {
        printf("%d/%d/%d: khong hop le\n\nBan hay nhap lai ngay thang nam: ", d, m, y);
        input(&d);
        input(&m);
        input(&y);
        kt = kt_hop_le(d, m, y);
    }
    printf("Hom nay la ngay %02d/%02d/%04d\n", d, m, y);
    return 0;
}