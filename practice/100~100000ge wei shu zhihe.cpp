#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i = 0;
    int j;
    scanf("%d", &j);
    printf("计算100~100000之间个、十、百等各位上的和为%d的数，分别是：\n", j);
    if (j > 0)
    {
        for (n = 100; n <= 100000; n++)
        {
            int a = n / 1 % 10;
            int b = n / 10 % 10;
            int c = n / 100 % 10;
            int d = n / 1000 % 10;
            int e = n / 10000 % 10;
            int f = n / 100000 % 10;
            if (a + b + c + d + e + f == j)
            {
                i++;
                printf(" %d", n);
            }
        }
        printf("\n共有%d个\n", i);
    }
    else
    {
        printf("\n未知\n");
    }
    system("pause");
    return 0;
}
