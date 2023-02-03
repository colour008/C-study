/***
 * @Author: colour008
 * @Date: 2023-02-03 16:52:23
 * @LastEditors: colour008
 * @LastEditTime: 2023-02-03 16:53:24
 * @FilePath: \C-study\2Fen ChaZhao.cpp
 * @Description: 二分查找
 * @Version:
 * @Copyright (c) 2023 by colour008, All Rights Reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int get_target(int *array, int left, int right, int target)
{
    if (left > right)
    {
        return -1;
    }

    int mid = left + (right - left) / 2;
    if (array[mid] == target)
    {
        return mid;
    }
    else if (array[mid] > target)
    {
        right = mid - 1;
        return get_target(array, left, right, target);
    }
    else
    {
        left = mid + 1;
        return get_target(array, left, right, target);
    }
}

int main()
{
    int get_target(int *array, int left, int right, int target);
    int a[6] = {2, 6, 8, 15, 49, 55};
    int left = 0;
    int right = sizeof(a) / sizeof(int) - 1;
    int target;
    printf("输入查找的目标值：");
    scanf("%d", &target);
    printf("%d\n", get_target(a, left, right, target));
    system("pause");
    return 0;
}