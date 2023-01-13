/*一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m;
	int g, s, b, q, w;
	printf("输入一个五位数，判断是否为回文数\n");
	scanf("%d", &m);
	g = m / 1 % 10;//个位
	s = m / 10 % 10;//十位
	b = m / 100 % 10;//百位
	q = m / 1000 % 10;//千位
	w = m / 10000 % 10;//万位
	if (g == w && s == q)
	{
		printf("%d是回文数\n", m);
	}
	else
	{
		printf("%d不是回文数\n", m);
	}
	system("pause");
	return 0;
}