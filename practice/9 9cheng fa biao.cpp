#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j;
	printf("利用for循环输出9x9乘法表：\n");
	for (i = 1; i <= 9; i++) //循环输出行
	{
		for (j = 1; j <= i; j++) //循环输出列
		{
			printf("%2dx%d=%2d\t", j, i, j * i);
		}
		printf("\n"); //每行输出完之后换行
	}
	system("pause");
	return 0;
}