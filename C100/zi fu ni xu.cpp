/*利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void f(int m)
{
	char c;
	if (m <= 1)
	{
		c = getchar();
		putchar(c);
	}
	else
	{
		c = getchar();
		f(m - 1);
		putchar(c);
	}
}
int main()
{
	void f(int m);
	f(5);
	printf("\n");
	system("pause");
	return 0;
}