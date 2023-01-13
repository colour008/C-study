//有一分数序列：2/1, 3/2, 5/3, 8/5, 13/8, 21/13……求岀这个数列的前 20 项之和。
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j, a[20] = {2, 3}, b[20] = {1, 2};
	double m, sum = 0;
	for (i = 2; i < 20; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
		b[i] = b[i - 1] + b[i - 2];
	}
	for (i = 0; i < 20; i++)
	{
		m = (double)a[i] / b[i];
		sum += m;
	}
	printf("sum=%f\n", sum);
	system("pause");
	return 0;
}