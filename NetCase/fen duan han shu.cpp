#include <stdio.h>
#include <stdlib.h>
int main()
{
	int y, x;
	scanf("%d", &x);
	if (x < 1)
	{
		y = x;
		printf("%d\n", y);
	}
	else if (x >= 1 && x < 10)
	{
		y = 2 * x - 1;
		printf("%d\n", y);
	}
	else
	{
		y = 3 * x - 11;
		printf("%d\n", y);
	}
	system("pause");
	return 0;
}