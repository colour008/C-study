/*应用结构体指针，找到年龄最大值对应的对象*/
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