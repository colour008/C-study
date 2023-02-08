/***
 * @Author: colour008
 * @Date: 2023-01-13 11:30:12
 * @LastEditors: colour008
 * @LastEditTime: 2023-02-08 10:25:16
 * @FilePath: \C-study\test2.cpp
 * @Description:
 * @Version:
 * @Copyright (c) 2023 by colour008, All Rights Reserved.
 */
#include <stdio.h>
#include <stdlib.h>
enum week
{
    Mon = 1,
    Tues,
    Wed,
    Thurs
} day;
int main()
{
    int day;
    scanf("%d", &day);
    switch (day)
    {
    case Mon:
        puts("Monday");
        break;
    case Tues:
        puts("Tuesday");
        break;
    case Wed:
        puts("Wednesday");
        break;
    case Thurs:
        puts("Thursday");
        break;
    default:
        puts("Error!");
        break;
    }
    system("pause");
    return 0;
}