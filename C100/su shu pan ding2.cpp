// 判断一个数是否为质数（素数）。
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isPrime(int m)
{
	int i;
	if (m <= 0 || m == 1)
	{
		return 2;
	}
	for (i = 2; i <= (int)sqrt(m); i++)
	{
		if (m % i == 0)
		{
			return 0;
		}
	}
	if (i >= (int)sqrt(m) + 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int isPrime(int m);
	int num, y;
	scanf("%d", &num);
	if (isPrime(num) == 1)
	{
		printf("%d是质数\n", num);
	}
	else if (isPrime(num) == 0)
	{
		printf("%d是合数\n", num);
	}
	else
	{
		printf("%d既不是质数也不是合数\n", num);
	}
	system("pause");
	return 0;
}