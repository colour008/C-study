// 输出杨辉三角前10行10列
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j;
	int a[10][10] = {};
	printf("杨辉三角前10行10列如下：\n");
	for (i = 0; i < 10; i++) /* 将第1列和对角线所有数值赋值为1 */
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || i == j)
			{
				a[i][j] = 1;
			}
		}
	}
	for (i = 2; i < 10; i++) /* 从第3行开始，依次将第2列~第j-1列的所有数值应用通项公式赋值 */
	{
		for (j = 1; j < i; j++)
		{

			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
	for (i = 0; i < 10; i++) /* 完整输出10行10列（正三角形）的二维数组 */
	{
		for (j = 0; j <= i; j++)
		{
			printf("%-4d", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}