// 5行5列矩阵对角线求和
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[5][5], i, j;
	int sum1 = 0, sum2 = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 5; i++)
	{
		j = i;
		sum1 += a[i][j];
	}
	for (i = 0; i < 5; i++)
	{
		j = 4 - i;
		sum2 += a[j][i];
	}
	printf("对角线之和为%d\n", sum1 + sum2 - a[2][2]);
	system("pause");
	return 0;
}