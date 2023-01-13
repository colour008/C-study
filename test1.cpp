// 输出杨辉三角前10行10列
#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	void swap(int *x, int *y);
	int a = 20, b = 10;
	int *pa = &a, *pb = &b;
	printf("a=%d,b=%d\n", a, b);
	printf("a=%p,b=%p\n", &a, &b);
	printf("*pa=%p,*pb=%p\n", *pa, *pb);
	swap(pa, pb);
	printf("a=%d,b=%d\n", a, b);
	printf("a=%p,b=%p\n", &a, &b);
	printf("*pa=%p,*pb=%p\n", *pa, *pb);
	system("pause");
	return 0;
}