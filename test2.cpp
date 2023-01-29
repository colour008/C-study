/***
 * @Author: colour008 70709807+colour008@users.noreply.github.com
 * @Date: 2023-01-13 11:30:12
 * @LastEditors: colour008 70709807+colour008@users.noreply.github.com
 * @LastEditTime: 2023-01-29 11:25:04
 * @FilePath: \C-study\test2.cpp
 * @Description:
 * @Version:
 * @Copyright (c) 2023 by colour008 70709807+colour008@users.noreply.github.com, All Rights Reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target)
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
    int num[4] = {1, 3, 2, 5};
    int target = 8;
    int *result = twoSum(num, 4, target);
    printf("%d %d\n", *result, *(result + 1));
    system("pause");
    return 0;
}