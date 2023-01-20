/*** 
 * @Author: colour008 70709807+colour008@users.noreply.github.com
 * @Date: 2023-01-13 11:30:12
 * @LastEditors: colour008 70709807+colour008@users.noreply.github.com
 * @LastEditTime: 2023-01-20 11:33:54
 * @FilePath: \C-study\test1.cpp
 * @Description: 
 * @Version: 
 * @Copyright (c) 2023 by colour008 70709807+colour008@users.noreply.github.com, All Rights Reserved. 
 */
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int i=0;
	
	for ( i = 10; i < 100; i++)
	{
		int a = 809 * i;
		int b = 8 * i;
		int c = 800 * i;
		int d = 9 * i;
		if (a>=1000&&a<10000&&b<100&&d>=100&&(a==c+d))
		{
			printf("%d ", i);
		}
		
	}
	
	system("pause");
	return 0;
}