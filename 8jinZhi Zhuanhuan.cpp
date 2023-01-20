/***
 * @Author: colour008 70709807+colour008@users.noreply.github.com
 * @Date: 2023-01-13 11:30:12
 * @LastEditors: colour008 70709807+colour008@users.noreply.github.com
 * @LastEditTime: 2023-01-20 11:54:19
 * @FilePath: \C-study\test2.cpp
 * @Description:八进制转换成十进制
 * @Version:
 * @Copyright (c) 2023 by colour008 70709807+colour008@users.noreply.github.com, All Rights Reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    char s[100];
    printf("输入一个八进制数，转换成十进制：\n");
    scanf("%s", s);
    int i = 0;
    int temp = 0;
    int len = strlen(s) - 1;
    int sum = 0;
    while (s[i] != '\0')
    {
        temp = (s[i] - '0') * pow(8, len);
        sum += temp;
        i++;
        len--;
    }
    printf("%d\n", sum);
    system("pause");
    return 0;
}