#include <stdio.h>
#include <stdlib.h>
int main()
{
    int d;
    printf("请输入一个整数: ");
    scanf("%d", &d);
    // 判断这个数最后一位是1则为奇数
    if (d % 2 == 1)
        printf("%d 是奇数。", d);
    else
        printf("%d 是偶数。", d);
    system("pause");
    return 0;
}