#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str[30] = "c";
	//기존 문자열에다가 추가
	strcat(str, "addition");

	printf("%s ", str);
	
}