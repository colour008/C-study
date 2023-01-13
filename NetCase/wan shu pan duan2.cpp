// 1~m之间的完数判断
#include <stdio.h>
#include <stdlib.h>
int cap(int x)
{
	int n = 0;
	int j;
	for (j = 1; j < x; j++)
	{
		if (x % j == 0)
		{
			n += j;
		}
	}
	if (n == x)
	{
		return x;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int cap(int x);
	int m, i;
	scanf("%d", &m);
	for (i = 1; i <= m; i++)
	{
		if (cap(i))
		{
			printf("%d\t", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}