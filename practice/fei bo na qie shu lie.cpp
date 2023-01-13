#include <stdio.h>
#include <stdlib.h>
#define num 30
int main()
{
    int a[num], i, j;
    printf("列出斐波那契数列前%d个数：\n", num);
    a[0] = 1;
    a[1] = 1;
    for (i = 0; i < num; i++)
    {
        if (i < 2)
        {
            printf("%d\t", a[i]);
        }
        else
        {
            a[i] = a[i - 1] + a[i - 2];
            printf("%d\t", a[i]);
        }
        j = i + 1;
        if (j % 5 == 0)
        {
            printf("\n\n");
        }
    }
    system("pause");
    return 0;
}