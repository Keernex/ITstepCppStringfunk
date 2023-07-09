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

char number_of_words(const char* str, const char* word)
{
    int s = 0;

    for (int i = 0; i <= mastrlen(str) - mastrlen(word); i++)
    {
        bool sing = true;
        for (int j = 0; j < mastrlen(word); j++)
        {
            if (str[i + j] != word[j])
            {
                sing = false;
                break;
            }
        }
        if (sing)
        {
            s++;
        }
    }
    cout << ' ' << word << " : " << s;
    return 0;
}

char sentence_text(const char* str)
{
    int s = 1;

    for (int i = 0; i < mastrlen(str) - 1; i++)
    {
        if (str[i] == '?')
        {
            s++;
        }
        if (str[i] == '.' && str[i + 1] != '.' || str[i] == '!' && str[i + 1] != '!')
        {
            s++;
        }
    }
    cout << " sentence : " << s;
    return 0;
}

char dots_commas(const char* str)
{
    int s = 0;

    for (int i = 0; i < mastrlen(str); i++)
    {
        if (str[i] == '.' || str[i] == ',')
        {
            s++;
        }
    }
    cout << " . and , : " << s;
    return 0;
}

char revers_str(const char* str)
{
    char new_str[100];
    int j = 0;
    for (int i = mastrlen(str) - 1; i >= 0; i--)
    {
        new_str[j] = str[i];
        j++;
    }
    new_str[j] = '\0';
    cout << new_str;
    return 0;
}

char revers_strstr(const char* str)
{
    char new_str[100];
    int j = 0;
    int len = mastrlen(str);
    for (int i = 0; i < len; i++)
    {
        if ((str[i] == '.' && str[i + 1] != '.') || (str[i] == '!' && str[i + 1] != '!') || str[i] == '?')
        {
            char new_new_str[100];
            for (int h = j; h < i + 1; h++)
            {
                new_new_str[h - j] = str[h];
            }
            new_new_str[i - j + 1] = '\0';
            j = i + 1;
            revers_str(new_new_str);
        }
    }
    return 0;
}