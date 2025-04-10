#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fibonacci(int n)
{
    if (n==0 || n==1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("Phan tu thu n trong day Fibonacci la: %d\n", fibonacci(n));
    return 0;
}