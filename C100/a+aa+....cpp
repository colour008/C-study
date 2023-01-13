//编程求s=a+aa+aaa+aaaa+aa...a的值。其中a是一个数字，几个数相加由键盘输入。例如2+22+222+2222+22222(此时共有5个数相加)。
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, n = 1, t, sum = 0;
	printf("输入1个数a，求a+aa+aaa+aaaa+aaaaa的和：\n");
	scanf("%d", &a);
	printf("a=%d\n", a);
	t = a;
	while (n <= 4)
	{
		a *= 10;
		a += t;
		sum += a;
		n++;
	}
	printf("结果为：%d\n", t + sum);
	system("pause");
	return 0;
}