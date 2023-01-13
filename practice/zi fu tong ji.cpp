/* 题目：利用自定义函数求字符串长度 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char c[30];
	printf("输入一段字符串，统计大小写字母、数字、空格及其他符号个数\n");
	gets(c);
	int big = 0;
	int samll = 0;
	int space = 0;
	int number = 0;
	int other = 0;
	char *p = c;
	while (*p != '\0')
	{
		if (*p >= 'A' && *p <= 'Z')
		{
			big++;
		}
		else if (*p >= 'a' && *p <= 'z')
		{
			samll++;
		}
		else if (*p >= '0' && *p <= '9')
		{
			number++;
		}
		else if (*p == ' ')
		{
			space++;
		}
		else
		{
			other++;
		}
		p++;
	}
	printf("经统计，%s中大写%d个、小写%d个、数字%d个、空格%d个，其他%d个\n", c, big, samll, number, space, other);
	system("pause");
	return 0;
}