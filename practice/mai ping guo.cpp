#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0;
    int sum = 0, r = 2;
    float money = 0;
    for (i = 0;; i++)
    {
        sum += r;
        if (sum >= 100)
        {
            sum -= r;
            break;
        }
        else
        {
            r *= 2;
        }
    }
    money = (sum * 1) / i;
    printf("平均花费：%f元", money);
    system("pause");
    return 0;
}
