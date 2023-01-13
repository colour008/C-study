#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, i;
    printf("请随意输入两个正整数（用空格空开），按回车键来计算：从0开始至较大数中，较小数不能被整除的数。\n");
    scanf("%d %d", &a, &b);
    if (a == 1 || b == 1 || a == b)
    {
        printf("没有不能被整除的数\n");
    }
    else if (a < b)
    {
        for (i = 0; i <= b; i++)
        {
            if (i % a == 0)
            {
                continue;
            }
            printf("%d ", i);
        }
        printf("\n");
    }
    else if (a > b)
    {
        for (i = 0; i <= a; i++)
        {
            if (i % b == 0)
            {
                continue;
            }
            printf("%d ", i);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
