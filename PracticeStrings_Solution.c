#include "PracticeStrings.h"

int countSubString(char* str, char* sub)
{
	int i = 0;
	int j = 0;
	int subLen = strlen(sub);
	int countSubs = 0;
	int flag = 0;
	while (str[i] != '\0') {
		if (str[i] == sub[j]) {
			i++;
			j++;
			flag = 1;
			for (int k = 0; k < subLen - 1; k++) {
				if (str[k + i] == sub[k + j]) {
					continue;
				}
				else {
					flag = 0;
					break;
				}
			}
			if (flag == 1) countSubs++;
			j = 0;
		}
		if (str[i] == str[i - 1] && str[i] == sub[0]) i -= 1;
		i++;
		j = 0;
	}
	return countSubs;
}

char* addStringsTogether(char* str1, char* str2, char* str3)
{
	char* result = (char*)malloc(sizeof(char) * (strlen(str1) + strlen(str2) + strlen(str3)) + 1);
	int index = 0;
	for (int i = 0; i < strlen(str1); i++, index++) {
		result[index] = str1[i];
	}

	for (int i = 0; i < strlen(str2); i++, index++) {
		result[index] = str2[i];
	}

	for (int i = 0; i < strlen(str3); i++, index++) {
		result[index] = str3[i];
	}
	result[strlen(str1) + strlen(str2) + strlen(str3)] = '\0';
	return result;
}

char* flipStr(char* str)
{
	int i = 0;
	int j = strlen(str) - 1;
	char temp;
	for (i, j; i < j; i++, j--) {
		char tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
	}
	return str;
}

char* flipWords(char* str)
{
	int len = strlen(str);
	char* new = (char*)malloc(sizeof(char) * len + 1);
	int i, j;
	int newIndex = 0;
	char* wordStart = str;
	for (i = 0; i <= len; i++) {
		if (str[i] == ' ' || str[i] == '\0') {
			for (j = i - 1; j >= wordStart - str; j--) {
				new[newIndex] = str[j];
				newIndex++;
			}
			new[newIndex] = ' ';
			newIndex++;
			wordStart = str + i + 1;
		}
	}
	new[newIndex - 1] = '\0';
	return new;
}

char* removeBlanks(char* str)
{
	int len = strlen(str);
	int countBlanks = 0;
	for (int i = 0; i < len; i++) {
		if (str[i] == ' ') {
			countBlanks++;
			for (int j = i; j < len; j++) {
				char temp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temp;
			}
		}
	}
	return str;
}

int strlen_without_c(char* str, char c)
{
	int count = 0;
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] != c) {
			count++;
		}
		i++;
	}
	return count;
}

char* strcpy_without_c(char* str, char c)
{
	char* copy = (char*)malloc(sizeof(char) * strlen_without_c(str, c));
	int i = 0;
	int j = 0;
	while (str[i] != '\0' && j < strlen_without_c(str, c)) {
		if (str[i] != c) {
			copy[j++] = str[i];
		}
		i++;
	}
	int len = strlen_without_c(str, c);
	copy[len] = '\0';
	return copy;
}

int isPaly(char* str)
{
	int i = 0;
	int j = strlen(str);
	int flag = 0;
	while (i < j) {
		if (str[i++] == str[j--])
			flag = 1;
		else
			flag = 0;

	}
	return flag;
}

char* upperFirst(char* str)
{
	int len = strlen(str);
	if (islower(str[0])) {
		str[0] = toupper(str[0]);
	}
	for (int i = 0; i < len; i++) {
		if (str[i - 1] == ' ') {
			if (islower(str[i])) {
				str[i] = toupper(str[i]);
			}
		}
	}
	return str;
}

int mostCommonLetter(char* str)
{
	int countArr[26] = { 0 };
	char c;
	for (int i = 0; (c = str[i]) != '\0'; i++) {
		if ('a' <= c && c <= 'z') {
			countArr[c - 'a']++; // Increment count for the letter
		}
		else if ('A' <= c && c <= 'Z') {
			countArr[c - 'A']++; // Increment count for the letter
		}
	}
	int biggest = countArr[0];
	for (int j = 1; j < 26; j++) {
		if (countArr[j] > biggest)
			biggest = countArr[j];
	}
	return biggest;
}

int moreUpperThanLower(char* str)
{
	int count = 0;
	int upper_count = 0;
	int lower_count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (isupper(str[i])) {
			upper_count++;
		}
		else if (islower(str[i])) {
			lower_count++;
		}
		if (isspace(str[i]) || str[i] == '\0') {
			if (upper_count > lower_count) {
				count++;
			}
			upper_count = 0;
			lower_count = 0;
		}
	}
	if (upper_count > lower_count) {
		count++;
	}
	return count;
}
