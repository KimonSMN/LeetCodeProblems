#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    *returnSize = 2;
    int *result = (int *)malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    // If no solution is found, adjust returnSize and return NULL
    *returnSize = 0;
    free(result);
    return NULL;
}

int main()
{
    int nums[] = {2, 7, 11, 15};                   // Example array
    int target = 9;                                // Target sum
    int numsSize = sizeof(nums) / sizeof(nums[0]); // Calculate size of nums
    int returnSize;                                // This will hold the size of the returned array from twoSum
    int *indices;                                  // This will point to the array returned by twoSum

    // Call twoSum function
    indices = twoSum(nums, numsSize, target, &returnSize);

    // If returnSize is 2, it means a valid pair was found
    if (returnSize == 2)
    {
        printf("Indices: [%d, %d]\n", indices[0], indices[1]);
    }
    else
    {
        printf("No two numbers add up to the target.\n");
    }

    // Free the dynamically allocated memory to prevent memory leaks
    free(indices);

    return 0;
}