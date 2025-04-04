#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void ham_mu (double x, int y)
{
    int i;
    double s = 1.0;
    if (y >= 0)
    {
        for (i=0; i<y; i++)
        {
            s *= x;
        }
    }
    else
    {
        for (i=0; i<abs(y); i++)
        {
            s *= x;
        }
        s = 1/s;
    }
    printf("%.0lf^%d = %lf", x, y, s);
}

int main()
{
    double x;
    int y;
    scanf("%lf", &x);
    scanf("%d", &y);
    ham_mu(x, y);
    return 0;
}