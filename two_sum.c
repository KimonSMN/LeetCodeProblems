#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{

    for (int i = 0; i <= numsSize; i++)
    {
        for (int j = i + 1; j <= numsSize; j++)
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
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize[2] = {-1, -1}; // Initialize with -1 to indicate not found

    twoSum(nums, numsSize, target, returnSize);

    if (returnSize[0] != -1 && returnSize[1] != -1)
    {
        printf("Indices: %d, %d\n", returnSize[0], returnSize[1]);
    }
    else
    {
        printf("No two sum solution found.\n");
    }

    return 0;
}