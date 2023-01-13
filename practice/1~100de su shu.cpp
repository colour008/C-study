#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int a, i, j, n = 0;
    printf("筛选1~100内的素数:\n");
    for (i = 1; i <= 100; i++)
    {

        a = (int)sqrt(i);
        for (j = 2; j <= a; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j >= a + 1)
        {
            printf("%2d\t", i);
            n++;
            if (n % 10 == 0)
            {
                printf("\n");
            }
        }
    }
    system("pause");
    return 0;
}