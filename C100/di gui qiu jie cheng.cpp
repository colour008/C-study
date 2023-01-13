/*递归方法求x！*/
#include <stdio.h>
#include <stdlib.h>
long f(int m)
{
	if (m == 1)
	{
		return 1;
	}
	else
	{
		return m * f(m - 1);
	}
}
int main()
{
	long f(int m);
	long x;
	printf("输入一个数求阶乘值\n");
	scanf("%d", &x);
	printf("%d的阶乘为%ld\n", x, f(x));
	system("pause");
	return 0;
}