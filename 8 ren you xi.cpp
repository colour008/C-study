/* 题目：8个人在一张桌子上喝酒，找到最后一个未喝酒的幸运儿。于是随机给8人随机从1~8编号。
然后开始报数，从1开始，数到3的人喝酒（轮下次不再喝，也不报数）。如此循环，直到找到最后一个未喝酒的幸运儿为止，问都有哪些人喝酒了？ */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, a[8], b[8];
	for (i = 0; i < 8; i++)
	{
		a[i] = i + 1;
		printf("%-3d", a[i]);
	}
	printf("\n");
	for (i = 0; i < 8; i++)
	{
		b[i] = 1;
		printf("%-3d", b[i]);
	}
	printf("\n");
	int down = 0;
	int j = 0;
	int baoShu = 0;
	while (8 - down > 1)
	{
		if (j == 8)
		{
			j = 0;
		}
		if (b[j] == 1)
		{
			baoShu++;
			if (baoShu == 3)
			{
				baoShu = 0;
				b[j] = 0;
				printf("第%d人喝了\n", a[j]);
				down++;
			}
		}
		j++;
	}
	for (i = 0; i < 8; i++)
	{
		if (b[i] == 1)
		{
			printf("幸运儿为%d号\n", a[i]);
		}
	}
	system("pause");
	return 0;
}