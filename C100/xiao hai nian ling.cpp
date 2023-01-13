/*递归法：有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。
问第三个人，又说比第2人大两岁。问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？*/
#include <stdio.h>
#include <stdlib.h>
int age(int m)
{
	int y;
	if (m == 1)
	{
		return 10;
	}
	else
	{
		y = age(m - 1) + 2;
		return y;
	}
}
int main()
{
	int age(int m);
	int x;
	printf("指定第几个人，求出年龄\n");
	scanf("%d", &x);
	printf("第%d个人的年龄为%d\n", x, age(x));
	system("pause");
	return 0;
}