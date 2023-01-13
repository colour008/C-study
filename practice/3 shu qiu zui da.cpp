#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c, t;
    printf("输入a,b,c三个数：\n");
    scanf("%d,%d,%d", &a, &b, &c);
    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (b > c)
    {
        t = b;
        b = c;
        c = t;
    }
    printf("最大数为：%d\n", c);
    system("pause");
    return 0;
}