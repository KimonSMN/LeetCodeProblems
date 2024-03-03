#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int tempArr[numsSize];

    // Create new array with only possible numbers for combination
    for (int i = 0; i <= numsSize; i++)
    {
        if (nums[i] < target)
            tempArr[i] += nums[i];
    }

    for (int i = 0; i <= numsSize; i++)
    {
        for (int j = 0; j <= numsSize - 1; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                returnSize[0] += i;
                returnSize[1] += j;
            }
        }
    }
}

int main()
{
}