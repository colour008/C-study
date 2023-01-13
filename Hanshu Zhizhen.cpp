// 利用函数指针求倒数和
#include <stdio.h>
#include <stdlib.h>
double fun1(int x)
{
    int i;
    double k;
    double sum = 0;
    for (i = 1; i <= x; i += 2)
    {
        k = (double)1 / i;
        sum += k;
    }
    return sum;
}
double fun2(int x)
{
    int i;
    double k;
    double sum = 0;
    for (i = 2; i <= x; i += 2)
    {
        k = (double)1 / i;
        sum += k;
    }
    return sum;
}
int main()
{
    double fun1(int x);
    double fun2(int x);
    int n;
    scanf("%d", &n);
    double (*p)(int x);
    if (n % 2 == 0)
    {
        p = fun2;
    }
    else
    {
        p = fun1;
    }
    printf("sum=%lf\n", p(n));
    system("pause");
    return 0;
}