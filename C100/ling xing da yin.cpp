/*用'*'号打印出菱形图案*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i; //行数
	int j; //空格循环行数
	int k; //'*'号循环行数
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3 - i; j++)
		{
			printf(" ");
		}
		for (k = 0; k < 2 * i + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 3; i > 0; i--)
	{
		for (j = 0; j <= 3 - i; j++)
		{
			printf(" ");
		}
		for (k = 0; k < 2 * i - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}