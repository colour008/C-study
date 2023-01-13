#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i = 0;
    int a,b,c,d,e,f;
    printf("计算100~100000之间个、十、百等各位上的和为5的数，分别是：\n");
    for (n = 100; n <= 100000; n++)
    {
         a = n / 1 % 10;
         b = n / 10 % 10;
         c = n / 100 % 10;
         d = n / 1000 % 10;
         e = n / 10000 % 10;
         f = n / 100000 % 10;
        if (a + b + c + d + e + f == 5)
        {
            i++;
            printf("%d ", n);
        }
    }
    printf("\n共有%d个\n", i);
    system("pause");
    return 0;
}
