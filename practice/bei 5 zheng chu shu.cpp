#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, i;
	printf("请输入你最喜欢的数字:");
	scanf("%d", &num);
	printf("你喜欢的数字中能被5整除的有：");
	for (i = num; i >= 5; i--)
	{
		if (i % 5 == 0)
		{
			printf(" %d", i);
		}
	}
	system("pause");
	return 0;
}