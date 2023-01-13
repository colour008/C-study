#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 1, n;
    int c = 1, d;
    printf("给n随意取一个值，计算1!+2!+.....+n!的值\n");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        printf("当n=%d时，1!+2!+.....+n!的值为2。\n", n);
    }
    else if (n > 1)
    {
        for (d = 2; d <= n; d++)
        {
            c *= d;
            a += c;
        }
        printf("当n=%d时，1!+2!+.....+n!的值为%d。\n", n, a);
    }
    system("pause");
    return 0;
}