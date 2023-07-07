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

char* exchange_Tab(char* str)
{
    int len = mastrlen(str);
    char str1[100];
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            str1[i] = '\t';
        }
        else
        {
            str1[i] = str[i];
        }
    }
    str1[len] = '\0';
    return str1;
}

char* what_sisvoli(char* str)
{
    int len = mastrlen(str);
    int len_b = 0;
    int len_n = 0;
    int len_s = 0;
    for (int i = 0; i < len; i++)
    {
        if (isalpha(str[i]))
        {
            len_b++;
        }
        else if (isdigit(str[i]))
        {
            len_n++;
        }
        else if (ispunct(str[i]))
        {
            len_s++;
        }
    }
    cout << "bukvi: " << len_b << endl;
    cout << "number: " <<  len_n << endl;
    cout << "simvoli: " << len_s << endl;
    return str;
}

int countWords(char* str)
{
    int kil = 0;
    bool word = false;

    for (int i = 0; i < mastrlen(str); i++)
    {
        if (isalpha(str[i]) || isdigit(str[i]))
        {
            if (!word) 
            {
                kil++;
                word = true;
            }
        }
        else 
        {
            word = false;
        }
    }
    return kil;
}

bool isPalindrome(char* str)
{
    int len = mastrlen(str);
    int i = 0;
    int j = len - 1;

    while (i < j)
    {
        while (i < j && !isalpha(str[i]))
            i++;
        while (i < j && !isalpha(str[j]))
            j--;

        if (tolower(str[i]) != tolower(str[j]))
            return false;

        i++;
        j--;
    }
    return true;
}