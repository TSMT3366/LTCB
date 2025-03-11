#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    printf("Ban hay nhap vao 1 so tu nhien n: ");
    scanf("%d", &n);
    while(n<0)
    {
        printf("Vui long nhap vao mot so tu nhien (n >= 0): ");
        scanf("%d", &n);
    }
    if (n == 0)
    {
        printf("So 0 co vo so uoc khac 0.\n");
    }
    else
    {
        for (int i=1; i<=n; i++)
        {
            if(n%i == 0)
            {
                printf("%d", i);
                if(i != n)
                {
                    printf(", ");
                }
            }
        }
        printf(" la cac uoc so cua %d.\n", n);
    }
    return 0;
}