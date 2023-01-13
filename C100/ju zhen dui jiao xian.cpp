//矩阵对角线求和
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j, a[3][3];
	int sum = 0;
	printf("请输入3*3的矩阵，求对角线之和\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		sum += a[i][i];
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}