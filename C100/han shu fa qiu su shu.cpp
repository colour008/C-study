/***
 * @Author: colour008 70709807+colour008@users.noreply.github.com
 * @Date: 2023-01-13 11:30:12
 * @LastEditors: colour008 70709807+colour008@users.noreply.github.com
 * @LastEditTime: 2023-01-17 09:44:13
 * @FilePath: \C-study\C100\han shu fa qiu su shu.cpp
 * @Description: 函数调用法求素数
 * @version: 1.0.0
 * @Copyright (c) 2023 by colour008 70709807+colour008@users.noreply.github.com, All Rights Reserved.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/***
 * @description:
 * @param {int} m
 * @return {m or 0}
 */
int f(int m)
{
	int i, y;
	y = (int)sqrt(m);
	for (i = 2; i <= y; i++)
	{
		if (m % i == 0)
		{
			break;
		}
	}
	if (i >= y + 1)
	{
		return m;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int f(int m);
	int i, a, b, t, l = 0;
	printf("输入两个数，求区间内的素数\n");
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	for (i = a; i <= b; i++)
	{
		if (f(i))
		{
			l++; // 统计输出的数字个数
			printf("%d\t", i);
			if (l % 10 == 0)
			{
				printf("\n");
			}
		}
	}
	printf("\n%d到%d之间共有%d个素数\n", a, b, l);
	system("pause");
	return 0;
}