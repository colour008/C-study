#include <stdio.h>
#include <stdlib.h>
#define MAX(a, b) ((a > b) ? (a) : (b))
int main()
{
	int a, b, c;
	printf("输入三个数比较大小\n");
	scanf("%d%d%d", &a, &b, &c);
	printf("max=%d\n", MAX(MAX(a, b), c));
	system("pause");
	return 0;
}