/***
 * @Author: colour008 70709807+colour008@users.noreply.github.com
 * @Date: 2023-01-13 11:30:12
 * @LastEditors: colour008 70709807+colour008@users.noreply.github.com
 * @LastEditTime: 2023-01-19 14:47:40
 * @FilePath: \C-study\test1.cpp
 * @Description: 已知三角形三边长，应用海伦公式三角形求面积
 * @Version:
 * @Copyright (c) 2023 by colour008 70709807+colour008@users.noreply.github.com, All Rights Reserved.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 首先确认输入的参数是否符合三角形的原理，即：任意两边之长大于第三边
double isTriangle(double x, double y, double z)
{
	if (x + y > z && y + z > x && x + z > y)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

// 构造海伦公式面积计算公式
double areaOfTriangle(double x, double y, double z)
{
	double p, area;
	p = (x + y + z) / 2; // p为三角形周长的一半,即p=1/2（a+b+c）
	area = sqrt(p * (p - x) * (p - y) * (p - z));
	return area;
}

int main()
{
	double isTriangle(double x, double y, double z);
	double areaOfTriangle(double x, double y, double z);
	double a, b, c;
	printf("输入三角形三边长:\n");
input:
	scanf("%lf%lf%lf", &a, &b, &c);
	if (isTriangle(a, b, c) == 0)
	{
		printf("输入参数错误，不是三角形，请重新输入:\n");
		goto input;
	}
	double s;
	s = areaOfTriangle(a, b, c);
	printf("a=%.2lf,b=%.2lf,c=%.2lf组成的三角形的面积等于%lf\n", a, b, c, s);
	system("pause");
	return 0;
}