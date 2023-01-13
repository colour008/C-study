//有一分数序列：2/1, 3/2, 5/3, 8/5, 13/8, 21/13……求岀这个数列的前20项之和。
#include <stdio.h>
#include <stdlib.h>
int main()
{
	double fz = 2, fm = 1, sum = 0, temp;
	int i;
	for (i = 0; i < 20; i++)
	{
		sum += fz / fm;
		temp = fz;
		fz = fm + fz;
		fm = temp;
	}
	printf("sum=%f\n", sum);
	system("pause");
	return 0;
}