#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    int sum;
    char c;
input:
    printf("请输入两个数按回车键求和：\n");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("两数和为%d\n", sum);
input2:
    getchar();
    printf("继续输入【Y】，退出输入【N】:");
    c = getchar();
    switch (c)
    {
    case 'y':
    case 'Y':
        goto input;
    case 'n':
    case 'N':
        printf("感谢使用，下次再见！\n");
        break;
    default:
        printf("输入错误。");
        goto input2;
    }

    system("pause");
    return 0;
}