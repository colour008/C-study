#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j = 0, a[40];
	for (i = 0; i < 40; i++)
	{
		if (i < 2)
		{
			a[i] = 1;
		}
		else
		{
			a[i] = a[i - 1] + a[i - 2];
		}
		j = j + a[i];
		printf("第%d月%d只兔子\n", i + 1, a[i] * 2);
	}
	printf("总共%d只兔子", j * 2);
	system("pause");
	return 0;
}