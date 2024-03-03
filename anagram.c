#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char *s, char *t)
{
    int sLength = strlen(s);
    int tLength = strlen(t);

    if (sLength != tLength)
    {
        return false;
    }

    int charCount[256] = {0};

    // Count characters in s
    for (int i = 0; i < sLength; i++)
    {
        charCount[s[i]]++;
    }

    // Subtract character count based on t
    for (int i = 0; i < tLength; i++)
    {
        charCount[t[i]]--;

        // If count becomes negative, t has an extra character not in s
        if (charCount[t[i]] < 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char *str1 = "lisen";
    char *str2 = "silent";

    bool result = isAnagram(str1, str2);
    if (result)
    {
        printf("The strings are anagrams.\n");
    }
    else
    {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}