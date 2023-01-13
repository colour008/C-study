//一个球从100米的高度自由落下,每次落地后反弹回原高度的0.8倍,求回弹第10次的高度和经历的总路程
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double h = 80, s = 100;
    int i;
    for (i = 2; i <= 10; i++)
    {
        s = s + 2 * h;
        h = h * 0.8;
    }
    printf("回弹第10次的高度为%lf米\n 经历的总路程为%lf米\n\n", h, s);
    system("pause");
    return 0;
}