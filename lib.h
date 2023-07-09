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

string replace_word(const string& str, const string& old_word, const string& new_word);
char redaction_text(const char* str);
char letter_occurs(const char* str);
char happen_numbers(const char* str);