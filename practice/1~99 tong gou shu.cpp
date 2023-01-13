#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i = 0;
    printf("计算1~99之间的同构数，分别是：\n");
    for (n = 2; n <= 99; n++)
    {
        int a = n / 1 % 10;
        if (a * a == n)
        {
            i++;
            printf("%d和%d为同构数\n", a, n);
        }
    }
    printf("共有%d对\n", i);
    system("pause");
    return 0;
}
