#include <stdio.h>
#include <stdlib.h>
int main()
{
    int age, year, birthday, c, d, e;
    printf("请输入您的年龄和当前年份，按回车键计算各级入学年份：");
    scanf("%d %d", &age, &year);
    printf("您输入的年龄为%d,当前年份为%d。\n按标准入学年龄和就读年份计算,", age, year);
    if (age < 6)
    {
        printf("你还未达到入学年龄，预计：\n");
    }
    else if (age >= 6 && age <= 12)
    {
        printf("你正在就读小学或刚毕业，并且：\n");
    }
    else if (age > 12 && age <= 15)
    {
        printf("你正在就读初中或刚毕业，并且：\n");
    }
    else if (age > 15 && age <= 18)
    {
        printf("你正在就读高中或刚毕业，并且：\n");
    }
    birthday = year - age;
    c = birthday + 6;
    d = c + 6;
    e = d + 3;
    printf("你小学入学年份为%d年,初中入学年份为%d年,高中入学年份为%d年。\n", c, d, e);
    system("pause");
    return 0;
}