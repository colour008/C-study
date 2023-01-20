/***
 * @Author: colour008 70709807+colour008@users.noreply.github.com
 * @Date: 2023-01-13 11:30:12
 * @LastEditors: colour008 70709807+colour008@users.noreply.github.com
 * @LastEditTime: 2023-01-20 14:41:58
 * @FilePath: \C-study\test2.cpp
 * @Description:
 * @Version:
 * @Copyright (c) 2023 by colour008 70709807+colour008@users.noreply.github.com, All Rights Reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    int i;
    long double j = 1, sum = 0;
    for (i = 1; i <= a; i++)
    {
        j *= i;
        sum += j;
    }
    printf("j=%Lf\nsum=%Lf\n", j, sum);
    system("pause");
    return 0;
}