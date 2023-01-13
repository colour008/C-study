#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n;
	int a, b, c;
	printf("通过计算列出100~999之间水仙花数，分别是：\n");
	for (n = 100; n < 1000; n++)
	{
		a = n / 1 % 10;
		b = n / 10 % 10;
		c = n / 100 % 10;
		if (n == pow(a, 3) + pow(b, 3) + pow(c, 3))
		{
			printf("%d\t", n);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}