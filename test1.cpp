#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target)
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

int main()
{
	int num[4] = {1, 3, 5, 9};
	int target = 8;
	int *result = twoSum(num, 4, target);
	printf("%d %d\n", *result, *(result + 1));
	system("pause");
	return 0;
}