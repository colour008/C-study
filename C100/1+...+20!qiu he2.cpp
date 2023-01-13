//求1+2!+3!+...+20!的和。
#include <stdio.h>
#include <stdlib.h>
long double c(int m)
{
	int i;
	long double x = 1;
	for (i = 1; i <= m; i++)
	{
		x *= i;
	}
	return x;
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