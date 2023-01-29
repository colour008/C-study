/***
 * @Author: colour008 70709807+colour008@users.noreply.github.com
 * @Date: 2023-01-29 11:04:20
 * @LastEditors: colour008 70709807+colour008@users.noreply.github.com
 * @LastEditTime: 2023-01-29 11:22:51
 * @FilePath: \C-study\LiangShu ZhiHe.cpp
 * @Description: 给定一个整数数组nums和一个整数目标值target，请你在该数组中找出和为目标值target的那两个整数，并返回它们的数组下标。
				你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
 * @Version:
 * @Copyright (c) 2023 by colour008 70709807+colour008@users.noreply.github.com, All Rights Reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int *twoSum1(int *nums, int numsSize, int target)
{
	int i, j;
	int *result = NULL;
	for (i = 0; i < numsSize - 1; i++)
	{
		for (j = i + 1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				result = (int *)malloc(sizeof(int) * 2);
				result[0] = i;
				result[1] = j;
				return result;
			}
		}
	}
	return result;
}

int *twoSum2(int *nums, int numsSize, int target)
{
	int i, j;
	int *result = (int *)malloc(sizeof(int) * 2);
	for (i = 0; i < numsSize - 1; i++)
	{
		for (j = i + 1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				*result = i;
				*(result + 1) = j;
				return result;
			}
		}
	}
	return result;
}

int main()
{
	int num[4] = {1, 3, 5, 9};
	int target = 10;
	int *result = twoSum1(num, 4, target);
	printf("%d %d\n", *result, *(result + 1));
	system("pause");
	return 0;
}