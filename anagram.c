#include <stdio.h>
#include <stdbool.h>

bool isAnagram(char *s, char *t)
{
    int sizeOfS = sizeof(s) / sizeof(s[0]);
    int sizeOfT = sizeof(t) / sizeof(t[0]);
    int i, j;
    if (sizeOfS != sizeOfT)
        return false;

    for (i = 0; i < sizeOfS; i++)
    {
        for (j = 0; j < sizeOfS; j++)
        {
            if (s[j] > s[j + 1] && (t[j] > t[j + 1]))
            {
                int temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < sizeOfS; i++)
    {
        if (s[i] != t[i])
            return false;
    }
    return true;
}

int main()
{

    return 0;
}