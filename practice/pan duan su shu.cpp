#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, i, j, l = 0;
    printf("输入一个数，判断是否为素数：\n");
    scanf("%d", &m);
    for (i = 1; i <= m; i++)
    {

        j = m % i;
        if (j == 0)
        {
            l++;
        }
    }
    if (l > 2)
    {
        printf("%d不是素数\n", m);
    }
    else
        printf("%d是素数\n", m);
    system("pause");
    return 0;
}