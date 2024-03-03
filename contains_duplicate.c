#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int *nums, int numsSize)
{
    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = 0; j < numsSize - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < numsSize - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            printf("true");
            return true;
        }
    }

    printf("false");
    return false;
}

int main()
{
    int array[] = {2, 14, 18, 22, 22};
    int size = sizeof(array) / sizeof(array[0]);
    containsDuplicate(array, size);
    return 0;
}