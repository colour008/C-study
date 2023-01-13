//铁路托运行李规定：行李重量不超过 50 公斤的，托运费按每公斤 0.15 元计费，如超过 50 公斤，则超过部分每公斤加收 0.10 元。编一程序完成自动计费工作。
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float x, y;
	printf("输入物品公斤数，计算费用：\n");
	scanf("%f", &x);
	printf("你的物品重量为%0.2f\n", x);
	if (x <= 50)
	{
		y = 0.15 * x;
	}
	else
	{
		y = 50 * 0.15 + (x - 50) * 0.25;
	}
	printf("总计费用=%0.2f元\n", y);
	system("pause");
	return 0;
}