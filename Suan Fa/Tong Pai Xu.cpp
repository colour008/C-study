/***
 * @Author: colour008
 * @Date: 2023-02-03 16:39:24
 * @LastEditors: colour008
 * @LastEditTime: 2023-02-03 16:39:28
 * @FilePath: \C-study\Tong Pai Xu.cpp
 * @Description: 桶排序
 * @Version:
 * @Copyright (c) 2023 by colour008, All Rights Reserved.
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int mark[101];
    int i, j, t;
    for (i = 0; i <= 100; i++)
    {
        mark[i] = 0;
    }
    int n;
    printf("输入排序的元素个数：");
    scanf("%d", &n);
    printf("输入%d个0~100的数进行排序：", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &t);
        mark[t]++;
    }
    printf("从小到大排序结果为：");
    for (i = 0; i <= 100; i++)
    {
        for (j = 1; j <= mark[i]; j++)
        {
            printf("%-3d", i);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}