/*** 
 * @Author: colour008
 * @Date: 2023-02-07 16:48:15
 * @LastEditors: colour008
 * @LastEditTime: 2023-02-07 16:48:19
 * @FilePath: \C-study\test1 copy.cpp
 * @Description: 
 * @Version: 
 * @Copyright (c) 2023 by colour008, All Rights Reserved. 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[50];
    char str2[5];
    scanf("%s%s", str1, str2);
    int len1 = strlen(str1), len2 = strlen(str2);
    int i, j;
    int count = 0;
    for (i = 0; i < len1; i++)
    {
        for (j = 0; j < len2; j++)
        {
            if (*(str1 + i + j) != *(str2 + j))
            {
                break;
            }
        }
        if (j == len2)
        {
            count++;
        }
    }

    printf("%d\n", count);
    system("pause");
    return 0;
}