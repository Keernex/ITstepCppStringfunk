#include "lib.h"

int main()
{
    char str[100];
    cout << "input str: ";
    cin.getline(str, sizeof(str));
    if (isPalindrome(str))
    {
        cout << "Palindrom" << endl;
    }
    else 
    {
        cout << "no Palindrom" << endl;
    }
    return 0;
}