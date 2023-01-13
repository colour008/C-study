/*删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str[] = "Is ams nots happys !";
	char c = 's';
	int i, j;
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == c)
		{
			for (j = i; j < strlen(str); j++)
			{
				str[j] = str[j + 1];
			}
		}
		printf("%c", str[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}