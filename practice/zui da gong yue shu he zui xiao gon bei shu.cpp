#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c, d, e;
    printf("请输入两个数：\n");
    scanf("%d,%d", &a, &b);
    if (a < b)
    {
        c = a;
        a = b;
        b = c;
    }
    /*这一部分是交换a,b*/
    d = a * b;
    /*这个就是求两个数的乘积*/
    e = a % b;
    /*这个是求a和b两个数取余数，当余数为0时，直接输出不进行下面的循环*/
    while (a % b != 0)
    {
        a = b;
        b = e;
        e = a % b;
    }
    /*这部分是a和b取余数进行循环，直到取余为0后进行输出*/
    printf("两数最大公约数为：%d,最小公倍数为：%d\n", b, d / b);
    system("pause");
    return 0;
}