#include "lib.h"

int main()
{
    char str1[100] = "aaa";
    char str2[100] = "ddd";
    char s = 'a';
    cout << mastrlen(str2) << endl;
    //cout << mastrcpy(str1,str2) << endl;
    cout << mastrcat(str1, str2) << endl;
    cout << mastrchr(str1, s) << endl;
    return 0;
}