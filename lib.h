#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <regex>
#include <time.h>
#include <windows.h>
#include <algorithm>
#include <string>
#include <sstream>
#include <cstring>
#include <cctype>
using namespace std;

char number_of_words(const char* str, const char* word);
char sentence_text(const char* str);
char dots_commas(const char* str);
char revers_str(const char* str);
char revers_strstr(const char* str);