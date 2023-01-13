#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, m = 5;
	for (i = 0; i < m; i++)
	{
		printf("*");
	}
	printf("\n");
	for (i = 0; i < m - 1; i++)
	{
		printf("*\n");
	}
	for (i = 0; i < m; i++)
	{
		printf("*");
	}
	printf("\n");
	system("pause");
	return 0;
}