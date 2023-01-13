/* 题目：有n个整数，是前面各数顺序向后移动m个位置后，最后m个数变成最前面的m个数。 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	printf("输入数组长度:\n");
	scanf("%d", &n);
	printf("输入数组内的元素值:\n");
	int i;
	int *Arr = (int *)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &Arr[i]);
	}
	int m;
	printf("输入需要挪动的个数:\n");
	scanf("%d", &m);
	int *p;
	for (i = 0; i < m; i++)
	{
		p = Arr + n - 1;
		int temp;
		temp = *p;
		while (p > Arr)
		{
			*p = *(p - 1);
			p--;
		}
		*p = temp;
	}
	printf("挪动%d个数后的数组为：\n", m);
	for (p = Arr; p < Arr + n; p++)
	{
		printf("%-4d", *p);
	}
	printf("\n");
	free(Arr);
	system("pause");
	return 0;
}