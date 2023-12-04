#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int countSubString(char* str, char* sub);
char* addStringsTogether(char* str1, char* str2, char* str3);
char* flipStr(char* str);
char* flipWords(char* str);
char* removeBlanks(char* str);
int strlen_without_c(char* str, char c);
char* strcpy_without_c(char* str, char c);
int isPaly(char* str);
char* upperFirst(char* str);
int mostCommonLetter(char* str);
int moreUpperThanLower(char* str);