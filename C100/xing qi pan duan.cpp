/*请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char c;
	char k;
	printf("请输入星期几的第一个字母来判断一下是星期几\n");
	c = getchar();
	getchar();
	switch (c)
	{
	case 'm':
		printf("是monday（星期一）\n");
		break;
	case 'w':
		printf("是wednesday（星期三）\n");
		break;
	case 'f':
		printf("是friday（星期五）\n");
		break;
	case 't':
		printf("请输入下一个字符\n");
		k = getchar();
		if (k == 'u')
		{
			printf("是tuesday（星期二）\n");
		}
		else if (k == 'h')
		{
			printf("是thursday（星期四）\n");
		}
		break;
	case 's':
		printf("请输入下一个字符\n");
		k = getchar();
		if (k == 'a')
		{
			printf("是saturday（星期六）\n");
		}
		else if (k == 'u')
		{
			printf("是sunday（星期日）\n");
		}
		break;
	default:
		break;
	}
	system("pause");
	return 0;
}