#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, a, c, i = 0;
    printf("计算1~9999之间的同构数，分别是：\n");
    for (n = 1; n <= 9999; n++)
    {
        a = n / 1 % 10;
        if (a * a == n)
        {
            i++;
            printf("%d和%d为同构数\n", a, n);
        }
        c = n % 100;
        if (n >= 1000 && c * c == n)
        {
            i++;
            printf("%d和%d为同构数\n", c, n);
        }
        }
    printf("共有%d对\n", i);
    system("pause");
    return 0;
}
