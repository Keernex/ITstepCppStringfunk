#include "lib.h"

int mastrlen(const char* str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

char* mastrcpy(char* str1, const char* str2)
{
    int len = 0;
    while (str2[len] != '\0')
    {
        str1[len] = str2[len];
        len++;
    }
    return str1;
}

char* mastrcat(char* str1, const char* str2)
{
    int len = 0;
    int len_str1 = mastrlen(str1);
    while (str2[len] != '\0')
    {
        str1[len_str1] = str2[len];
        len++;
        len_str1++;
    }
    return str1;
}

char* mastrchr(char* str, char s)
{
    int len = 0;
    while (str[len] != '\0')
    {
        if (str[len] == s)
        {
            return &str[len];
        }
        len++;
    }
    return 0;
}