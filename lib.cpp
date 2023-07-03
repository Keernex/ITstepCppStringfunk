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

char* mastrstr(char* str1, char* str2)
{
    int i = 0;
    int j = 0;
    while (str1[i] != '\0')
    {
        if (str1[i] == str2[j])
        {
            j++;
            if (j == mastrlen(str2))
            {
                cout << i - j;
                return 0;
            }
        }
        i++;
    }
    return 0;
}
// --------------

int mastrcmp(const char* str1, const char* str2)
{
    if (mastrlen(str2) == mastrlen(str1))
    {
        return 0;
    }
    else if (mastrlen(str2) < mastrlen(str1))
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int StringToNumber(char* str)
{
    int i = 0;
    int res = 0;
    int len = mastrlen(str);
    do
    {
        res += (str[i] - '0') * pow(10, len - 1);
        i++;
        len--;
    } while (len);
    return res;
}

char* NumberToString(int num)
{
    char* str = new char[100];
    sprintf(str, "%d", num);
    return str;
}

char* Uppercase(char* str)
{
    int len = mastrlen(str);
    for (int i = 0; i < len; i++)
    {
        str[i] = toupper(str[i]);
    }
    return str;
}

char* Lowercase(char* str)
{
    int len = mastrlen(str);
    for (int i = 0; i < len; i++)
    {
        str[i] = tolower(str[i]);
    }
    return str;
}

char* mastrrev(char* str)
{
    int len = mastrlen(str);
    reverse(str, str + len);
    return str;
}