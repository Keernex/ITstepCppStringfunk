#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>
#include <windows.h>
#include <algorithm>
#include <string>
#include <sstream>
#include <cstring>
#include <cctype>
using namespace std;


int mastrlen(const char* str);
char* mastrcpy(char* str1, const char* str2);
char* mastrcat(char* str1, const char* str2);
char* mastrchr(char* str, char s);
char* mastrstr(char* str1, char* str2);

int mastrcmp(const char* str1, const char* str2);
int StringToNumber(char* str);
char* NumberToString(int num);
char* Uppercase(char* str);
char* Lowercase(char* str);
char* mastrrev(char* str);