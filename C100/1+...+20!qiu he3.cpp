// 递归法求1+2!+3!+...+20!的和。
#include <stdio.h>
#include <stdlib.h>
long double c(int m)
{
	if (m == 0 || m == 1)
	{
		return 1;
	}
	else
	{
		return m * c(m - 1);
	}
}
int main()
{
	long double c(int m);
	int i;
	long double sum = 0;
	for (i = 1; i <= 20; i++)
	{
		sum += c(i);
	}
	printf("sum=%Lf\n", sum);
	system("pause");
	return 0;
}