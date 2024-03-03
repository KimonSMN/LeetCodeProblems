/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

char ***groupAnagrams(char **strs, int strsSize, int *returnSize, int **returnColumnSizes)
{
    for (int i = 0; i < strsSize; i++) // Iterate through all elements of strs
    {
        int charCount1[256] = {0};            // Reset for each string
        int tempLength1 = strlen(strs[i]);    // Find length of each strs element
        for (int j = 0; j < tempLength1; j++) // Iterate through all characters in each strs element
        {
            charCount1[(unsigned char)strs[i][j]]++;
        }

        for (int k = 0; k < strsSize; k++)
        {
            if (i == k)
                continue;              // Skip comparing the string with itself
            int charCount2[256] = {0}; // Character counts for strs[k]

            int tempLength2 = strlen(strs[k]);
            for (int l = 0; l < tempLength2; l++)
            {
                charCount2[(unsigned char)strs[k][l]]++;
            }

            bool isAnagram = true;
            for (int m = 0; m < 256; m++)
            {
                if (charCount1[m] != charCount2[m])
                {
                    isAnagram = false;
                    break;
                }
            }
        }
        
    }
}
int main()
{
    return 0;
}