#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, min, k, a[10];
    printf(" 输入10个整数，从小到大排序:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]); //输入10个数
    }
    printf("\n 您输入的10个数为:\n");
    for (i = 0; i < 10; i++) //在c语言中，数组的下标从0开始
    {
        printf("  %d", a[i]);
    }             //输出这10个数
    printf("\n"); //以下8行是对这10个数排序
    for (i = 0; i < 10; i++)
    {
        min = i;
        for (j = i + 1; j < 10; j++)
        {
            if (a[min] > a[j])
                min = j;
        }
        k = a[i]; //以下3行将a[i+1]~a[10]中最小值与a[i]对换
        a[i] = a[min];
        a[min] = k;
    }
    printf("\n 10个数从小到大排序结果为:\n"); //输出已排好序的10个数
    for (i = 0; i < 10; i++)
    {
        printf("  %d", a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}