#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void input (int *m, int *y)
{
    printf("Ban hay nhap lan luot gia tri thang & nam: ");
    scanf("%d %d", m, y);
    while (*m<1 || *y<1 || *m>12)
    {
        printf("\nGia tri khong hop le.\nVui long nhap lai: ");
        scanf("%d %d", m, y);
    }
}
void output (int m, int y)
{
    int Max_day[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (y%400 == 0 || (y%4 == 0 && y%100 != 0))
    {
        Max_day[2] = 29;
    }
    printf("Thang %d nam %d co %d ngay.\n", m, y, Max_day[m]);
}
int main()
{
    int m, y;
    input(&m, &y);
    output(m, y);
    return 0;
}
