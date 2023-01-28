/***
 * @Author: colour008 70709807+colour008@users.noreply.github.com
 * @Date: 2023-01-13 11:30:12
 * @LastEditors: colour008 70709807+colour008@users.noreply.github.com
 * @LastEditTime: 2023-01-27 08:53:28
 * @FilePath: \C-study\C100\di gui qiu jie cheng.cpp
 * @Description: 递归方法求从1~n的阶乘和
 * @Version:
 * @Copyright (c) 2023 by colour008 70709807+colour008@users.noreply.github.com, All Rights Reserved.
 */

#include <stdio.h>
#include <stdlib.h>
long double fun1(int m)
{
	if (m == 0 || m == 1)
	{
		return 1;
	}
	else
	{
		return m * fun1(m - 1);
	}
}

long double fun2(int n)
{
	long double sum = 0;
	if (n == 0 || n == 1)
	{
		sum = 1;
	}
	else
	{
		sum = fun1(n) + fun2(n - 1);
	}
	return sum;
}

int main()
{
	int x;
	printf("输入一个数求阶乘值\n");
	scanf("%d", &x);
	printf("%d的阶乘为%Lf\n", x, fun2(x));
	system("pause");
	return 0;
}