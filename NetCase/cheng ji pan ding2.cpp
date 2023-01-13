#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x;
	char g;
	scanf("%d", &x);
	g = (x >= 90) ? 'A' : ((x >= 80) ? 'B' : ((x >= 70) ? 'C' : ((x >= 60) ? 'D' : 'E')));
	printf("成绩为%c\n", g);
	system("pause");
	return 0;
}