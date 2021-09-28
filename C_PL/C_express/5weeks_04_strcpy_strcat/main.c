// [예제 3] strcpy와 strcat
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main(void)
{
	char string[80];

	strcpy(string, "Hello world from "); // 복사하기
	strcat(string, "strcpy"); // 문자열 연결
	strcat(string, "and "); // 문자열 연결
	strcat(string, "strcat!"); // 문자열 연결
	printf("string = %s\n\n", string);
	return 0;
}