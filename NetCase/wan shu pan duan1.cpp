// 1~1000之间的完数判断
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, i, j;
	printf("列出1~1000的完数，分别是：\n");
	for (i = 1; i <= 1000; i++)
	{
		n = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				n += j;
			}
		}
		if (n == i)
		{
			printf("%d\t", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}