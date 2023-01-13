#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x;
	scanf("%d", &x);
	if (x >= 90)
	{
		printf("成绩为A\n");
	}
	else if (x >= 80)
	{
		printf("成绩为B\n");
	}
	else if (x >= 70)
	{
		printf("成绩为C\n");
	}
	else if (x >= 60)
	{
		printf("成绩为D\n");
	}
	else
	{
		printf("成绩为E\n");
	}
	system("pause");
	return 0;
}