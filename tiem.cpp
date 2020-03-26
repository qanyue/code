/*
 * Author: Haipz
 * School: HDU
 * File Name: registry1.0.cpp
 */
#include <cstdio>
#include <cmath>
#include <ctime>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <climits>
#include <cfloat>
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

char s[1024], buffer[128], result[1024*4];

void work_1() {
    system("reg add \"HKEY_CLASSES_ROOT\\.c\\ShellNew\" /v \"NullFile\" /t REG_SZ");
}

void work_2() {
    system("reg add \"HKEY_CLASSES_ROOT\\.cpp\\ShellNew\" /v \"NullFile\" /t REG_SZ");
}

void work_3() {
    system("reg add \"HKEY_CLASSES_ROOT\\.java\\ShellNew\" /v \"NullFile\" /t REG_SZ");
}

int main() {
    printf("Add registry for C, C++ and Java\n");
    printf("Author: Haipz\nSchool: HDU\n");
    printf("1 for C;\n2 for C++;\n3 for Java.\n");
    printf("Example: 12 to add C and C++.\n");
    printf("Please make choice(s): ");
    gets(s);
    for (int i = 0; s[i] != '\0'; ++i) {
        printf("Working...\n");
        if (s[i] == '1') work_1();
        else if (s[i] == '2') work_2();
        else if (s[i] == '3') work_3();
        else printf("%c is a wrong enter!\n", s[i]);
    }
    system("pause");
    return 0;
}