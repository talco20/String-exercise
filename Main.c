#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#include "PracticeStrings.h"


int main()
{
	//----Task 1----//
	puts("EX 1");
	char str1[22] = "ab?yabcabb*caabcc";
	char sub[4] = "abc";

	if (countSubString(&str1, &sub) == 2)
		printf("Succeed to count the sub apearances in the string!\n");
	else
		printf("Failed to count the sub apearances in the string!\n");

	//----Task 2----//
	puts("EX 2");
	char* addTogether = addStringsTogether("Shabat", "Shalom", "Israel");
	char* Together = "ShabatShalomIsrael";
	if (strcmp(addTogether, Together) == 0)
		printf("Succeed join words!\n");
	else
		printf("Failed to join words!\n");

	//----Task 3----//
	puts("EX 3");
	char flip[7] = "Shalom";
	char* str2 = flipStr(flip);
	if (strcmp(str2, "molahS") == 0)
		printf("Succeed flip the word!\n");
	else
		printf("Failed to flip word!\n");

	//----Task 4----// 
	puts("EX 4");
	char str[20] = "This is an example";
	char* new = (char*)malloc(sizeof(char) * strlen(str) + 1);
	strcpy(new, str);
	char wanted[19] = "sihT si na elpmaxe";
	char* result = flipWords(&str);
	if (strcmp(result, wanted) == 0)
		printf("Succeed to flip words!\n");
	else
		printf("Failed to flip words!\n");

	//----Task 5----// 
	puts("EX 5");
	char str3[20] = "This is an example";
	char* res1 = removeBlanks(str3);
	if (strcmp(res1, "Thisisanexample") == 0)
		printf("Succeed to delete blanks!\n");
	else
		printf("Failed to delete blanks!\n");

	//----Task 6----// 
	puts("EX 6");
	char str4[20] = "This is an example";
	if (strlen_without_c(str4,'s' != 16))
		printf("Succeed to calculate len without 's'!\n");
	else
		printf("Failed to calculate len without 's'!\n");
	//----Task 7----// 
	puts("EX 7");
	char str5[20] = "This is an example";
	char* res2 = strcpy_without_c(str5, 's');
	if (strcmp(res2, "Thi i an example") == 0)
		printf("Succeed to copy  without 's'!\n");
	else
		printf("Failed to copy without 's'!\n");
	
	//----Task 8----// 
	puts("EX 8");
	char str6[8] = "abbaaba";
	if (isPaly(str6))
		printf("Succeed to find palyndrome in %s!\n", str6);
	else
		printf("Failed to find palyndrome %s!\n", str6);

	//----Task 9----// 
	puts("EX 9");
	char str7[20] = "this Is an example";
	char* res3 = upperFirst(str7);
	if (strcmp(res3, "This Is An Example") == 0)
		printf("Succeed to make all first letters to uppercase!\n");
	else
		printf("Failed to make all first letters to uppercase!\n");

	//----Task 10----// 
	puts("EX 10");
	char str8[30] = "Sara Abramson lives in Alabama";
	if (mostCommonLetter(str8) == 8)
		printf("Succeed to return most common letter count!\n");
	else
		printf("Failed to return most common letter count!\n");

	//----Task 11----//
	puts("EX 11");
	char str9[30] = "Rivka AVI MOTi VERed";
	if (moreUpperThanLower(str9) == 3)
		printf("Succeed to return the correct number of words with more uppercase letter than lower!\n");
	else
		printf("Failed to return the correct number of words with more uppercase letter than lower!\n");

	puts("DONE!");
}