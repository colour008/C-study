/***
 * @Author: colour008 70709807+colour008@users.noreply.github.com
 * @Date: 2023-01-16 12:55:52
 * @LastEditors: colour008 70709807+colour008@users.noreply.github.com
 * @LastEditTime: 2023-01-17 10:35:43
 * @FilePath: \C-study\zhizhen shuzu.cpp
 * @Description:应用指针数组输出二位数组中的任意一个数
 * @Version: 1.0.0
 * @Copyright (c) 2023 by colour008 70709807+colour008@users.noreply.github.com, All Rights Reserved.
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[2][3];
    printf("输入2行3列的数组：\n");
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int(*p)[3] = a;
    printf("%d\n", *(*(p + 1) + 2));
    // for (i = 0; i < 2; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         printf("%-3d", a[i][j]);
    //     }
    //     printf("\n");
    // }
    system("pause");
    return 0;
}