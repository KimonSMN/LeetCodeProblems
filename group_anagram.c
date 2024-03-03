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
        int charCount[256] = {0};            // Reset for each string
        int tempLength = strlen(strs[i]);    // Find length of each strs element
        for (int j = 0; j < tempLength; j++) // Iterate through all characters in each strs element
        {
            charCount[(unsigned char)strs[i][j]]++;
        }
    }
}

int main()
{
}