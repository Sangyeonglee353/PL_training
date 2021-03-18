// 문자열에 대한 임시 저장소 만들기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>

void main(void)
{
	char buff[] = "문자열 복제하기";
	char* dup;

	dup = _strdup(buff);
	if (dup)
	{
		strcpy(buff, "다른 문자열");
		puts(buff);
		puts(dup);
		free(dup);
	}
}