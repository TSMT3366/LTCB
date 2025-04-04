#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int giai_thua (int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    return n * giai_thua(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d! = %d", n, giai_thua(n));
    return 0;
}