#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10], i, j, n;
    printf("输入10个数：\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++) //从第一个开始进行比较
        {
            if (a[i] > a[j]) //选择最小的数
            {
                n = a[i];
                a[i] = a[j];
                a[j] = n;
            }
        }
    }
    printf("该十个数升序为：\n");
    for (i = 0; i < 10; i++)
    {
        printf("%2d ", a[i]);
    }
    system("pause");
    return 0;
}