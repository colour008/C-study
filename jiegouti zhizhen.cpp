/***
 * @Author: colour008 70709807+colour008@users.noreply.github.com
 * @Date: 2023-01-16 14:44:31
 * @LastEditors: colour008 70709807+colour008@users.noreply.github.com
 * @LastEditTime: 2023-01-17 12:06:57
 * @FilePath: \C-study\jiegouti zhizhen.cpp
 * @Description: 应用结构体指针找出3人中年龄最大的那个人
 * @Version:1.0.0
 * @Copyright (c) 2023 by colour008 70709807+colour008@users.noreply.github.com, All Rights Reserved.
 */

#include <stdio.h>
#include <stdlib.h>
struct Stu
{
    char name[20];
    int age;
} stu[3] = {"张三", 16, "李四", 18, "王麻子", 15};

int main()
{
    struct Stu *p = stu;
    struct Stu *q = NULL;
    int i;
    int maxAge = 0;
    for (i = 0; i < 3; i++)
    {
        if (p->age > maxAge)
        {
            maxAge = p->age;
            q = p;
        }
        p++;
    }
    printf("姓名：%s, 年龄:%d\n", q->name, q->age);
    system("pause");
    return 0;
}