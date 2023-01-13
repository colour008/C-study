/* 题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, a[5] = {};		  // 声明5个数的数组
	int max, min, temp, x, y; // 声明最大值max，最小值min，交换中间值temp及最大值对应的数组位数x和最小值对应的数组位数y
	int *p;					  // 声明一个指针，用于指向数组
	p = a;					  // 将数组a的地址赋予指针变量
	for (i = 0; i < 5; i++)	  // 通过for循环输入5个数
	{
		scanf("%d", &a[i]);
	}
	max = a[0];				// 假定a[0]为最大值
	for (i = 1; i < 5; i++) // 从a[1]开始往后遍历整个数组，如果a[i]为最大值，就将a[i]赋值给max
	{
		if (a[i] >= max)
		{
			max = a[i];
			x = i; // 找到最大值所在的数组位数，即对应的数值为a[x]
		}
	}
	temp = a[0]; // 最大值a[x]和第一个数a[0]进行交换
	a[0] = a[x];
	a[x] = temp;
	min = a[4];				 // 假定a[4]为最小值
	for (i = 3; i >= 0; i--) // 从a[3]开始往前遍历整个数组，如果a[i]为最小值，就将a[i]赋值给min
	{
		if (a[i] <= min)
		{
			min = a[i];
			y = i; // 找到最小值所在的数组位数，即对应的数值为a[y]
		}
	}
	temp = a[4]; // 最小值a[y]和最后一个数a[4]进行交换
	a[4] = a[y];
	a[y] = temp;
	for (p = a; p < a + 5; p++) // 利用指针输出数组，a即为a[0]的地址，a+5即为a[5]的地址
	{
		printf("%-4d", *p);
	}
	printf("\n");
	system("pause");
	return 0;
}