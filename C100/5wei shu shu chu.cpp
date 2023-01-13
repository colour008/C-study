/*给一个不多于5位的正整数，要求：1.求它是几位数，2.输出每位数的数值，3.逆序打印出各位数字。*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m;
	int g, s, b, q, w;
	printf("输入一个不大于五位数的数，求出是几位数，分别列出每位的数值，并逆序打印出这个数\n");
	scanf("%d", &m);
	g = m / 1 % 10;
	s = m / 10 % 10;
	b = m / 100 % 10;
	q = m / 1000 % 10;
	w = m / 10000 % 10;
	if (w != 0)
	{
		printf("%d是个5位数\n", m);
		printf("每位的数值为：%d %d %d %d %d\n", w, q, b, s, g);
		printf("逆序输出结果为：%d%d%d%d%d\n", g, s, b, q, w);
	}
	else if (q != 0)
	{
		printf("%d是个4位数\n", m);
		printf("每位的数值为：%d %d %d %d\n", q, b, s, g);
		printf("逆序输出结果为：%d%d%d%d\n", g, s, b, q);
	}
	else if (b != 0)
	{
		printf("%d是个3位数\n", m);
		printf("每位的数值为：%d %d %d\n", b, s, g);
		printf("逆序输出结果为：%d%d%d\n", g, s, b);
	}
	else if (s != 0)
	{
		printf("%d是个2位数\n", m);
		printf("每位的数值为：%d %d\n", s, g);
		printf("逆序输出结果为：%d%d\n", g, s);
	}
	else
	{
		printf("%d是个1位数\n", m);
		printf("每位的数值为：%d\n", g);
		printf("逆序输出结果为：%d\n", g);
	}
	system("pause");
	return 0;
}