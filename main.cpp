#include "lib.h"

int main()
{
    char str1[100] = "heworllword";
    char str2[100] = "word";
    char str[100] = "123456";
    int num = 100;
    char s = 'a';
    /*cout << mastrlen(str2) << endl;
    cout << mastrcpy(str1,str2) << endl;
    cout << mastrcat(str1, str2) << endl;
    cout << mastrchr(str1, s) << endl;
    cout << mastrstr(str1, str2) << endl;*/
    //cout << mastrcmp(str1, str2) << endl;
    cout << NumberToString(num) << endl;
    return 0;
}