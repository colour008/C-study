#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j = 0, a[9];
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		j = j + a[i];
	}
	printf("%d\n", j);
	system("pause");
	return 0;
}