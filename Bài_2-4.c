#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int sum=0;
    for (int i=1; i<=100; i++)
    {
        if (i%2 != 0)
        {
            sum += i;
        }
    }
    printf("Tong cua cac so le tu 1 den 100 bang: %d", sum);
    return 0;
}