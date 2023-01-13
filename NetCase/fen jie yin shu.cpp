#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m, i;
	printf("输入一个数，列出所有质因数：\n");
	scanf("%d", &m);
	printf("%d的质因数为：", m);
	for (i = 2; i <= m; i++)
	{
		while (m % i == 0)
		{
			printf("%d ", i);
			m = m / i;
		}
	}
	printf("\n");
	system("pause");
	return 0;
}