/* 题目：利用自定义函数求字符串长度 */
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 20
int string_length(char *string)
{
	int len = 0;
	while (*string != '\0')
	{
		len++;
		string++;
	}
	return len;
}
int main()
{
	int string_length(char string[]);
	char c[MAX_SIZE];
	printf("请输入小于20的字符串:\n");
	gets(c);
	printf("您输入的字符串为:%s\n", c);
	char *p;
	p = c;
	printf("字符串%s的长度是%d\n", c, string_length(p));
	system("pause");
	return 0;
}