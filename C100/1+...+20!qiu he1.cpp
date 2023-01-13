//求1+2!+3!+...+20!的和。
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j;
	long double c = 1, sum = 0;
	for (i = 1; i <= 20; i++)
	{
		c *= i;
		sum += c;
	}
	printf("sum=%Lf\n", sum);
	system("pause");
	return 0;
}