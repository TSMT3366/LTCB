#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    for (int i=1; i<=20; i++)
    {
        if (i%2 == 0)
        {
            printf("%d", i);
            if(i != 20)
            {
                printf("\t");
            }
        }
    }
    return 0;
}
