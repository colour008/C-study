/***
 * @Author: colour008
 * @Date: 2023-01-13 11:30:12
 * @LastEditors: colour008
 * @LastEditTime: 2023-02-08 16:56:17
 * @FilePath: \C-study\test1.cpp
 * @Description:
 * @Version:
 * @Copyright (c) 2023 by colour008, All Rights Reserved.
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c;
    char *filepath = (char *)"/Desktop/1.txt";
    FILE *f;
    f = fopen(filepath, "w");
    if (f == NULL)
    {
        printf("打开错误");
        exit(0);
    }
    else
    {
        while ((c = getchar()) != '#')
        {
            fputc(c, f);
        }
    }
    putchar('\n');
    fclose(f);
    system("pause");
    return 0;
}