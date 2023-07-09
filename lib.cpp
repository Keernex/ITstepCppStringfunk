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

bool contains_char(const char* str, char s)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == s)
        {
            return false;
        }
    }
    return true;
}

string replace_word(const string& str, const string& old_word, const string& new_word)
{
    regex wordRegex(old_word);
    return regex_replace(str, wordRegex, new_word);
}

char redaction_text(const char* str)
{
    bool sign = true;
    char new_str[100];
    for (int i = 0; i < mastrlen(str); i++)
    {
        if (sign)
        {
            if (isalpha(str[i]))
            {
                new_str[i] = toupper(str[i]);
            }
            else
            {
                new_str[i] = str[i];
            }
        }
        else
        {
            new_str[i] = str[i];
        }
        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
        {
            sign = true;
        }
        else
        {
            sign = false;
        }
    }
    cout << new_str << endl;
    return *new_str;
}

char letter_occurs(const char* str)
{
    int s = 0;
    char new_str[100];
    int fact = 0;
    for (int i = 0; i < mastrlen(str); i++)
    {
        if (contains_char(new_str, str[i]))
        {
            new_str[fact] = str[i];
            fact++;
        }
    }

    for (int i = 0; i < mastrlen(new_str); i++)
    {
        for (int j = 0; j < mastrlen(str); j++)
        {
            if (new_str[i] == str[j])
            {
                s++;
            }
        }cout << ' ' << new_str[i] << ": " << s << endl;
        s = 0;
    }
    return 0;
}

char happen_numbers(const char* str)
{
    int s = 0;
    for (int i = 0; i < mastrlen(str); i++)
    {
        if (isdigit(str[i]))
        {
            s++;
        }
    }
    cout << "number in text: " << s << endl;
    return 0;
}