#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 0, b = 0, cs;
	char c = 3;
	printf("请输入开机密码（提示：361复机密码爱你一万年！)\n"); // 打印心型前可以先设置个密码，考验下对方
	scanf("%d", &cs);											// 通过if语句去实现一个最简单的密码判断，也可以通过goto语句去设置一个次数输入
	if (cs == 1314521)
	{
		printf("一万年太久我们只争朝夕！\n\n\n");
	}
	else if (cs != 1314521)
	{
		printf("早知如此绊人心，何如当初莫相识。我也错了\n\n\n");
		system("pause");
		return 0;
	}
	// 然后是爱心的打印有很多种方式，在这里我采用for进行打印
	for (a = 0; a < 3; a++) // 打印前三行
	{
		for (b = 0; b < 6 - 2 * a; b++)
		{
			printf(" ");
		}
		for (b = 0; b < 5 + 4 * a; b++)
		{
			printf("%c", c);
		}
		for (b = 0; b < 9 - 4 * a; b++)
		{
			printf(" ");
		}
		for (b = 0; b < 5 + 4 * a; b++)
		{
			printf("%c", c);
		}
		printf("\n");
	}

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 31; b++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
	for (a = 0; a < 6; a++)
	{
		for (b = 0; b < 2 + 2 * a; b++)
		{
			printf(" ");
		}
		for (b = 0; b < 27 - 4 * a; b++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
	for (a = 0; a < 2; a++)
	{
		for (b = 0; b < 14 + 1 * a; b++)
		{
			printf(" ");
		}
		for (b = 0; b < 3 - 2 * a; b++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}