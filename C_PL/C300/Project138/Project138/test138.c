// 파일에서 한 문자 읽기(fgetc)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;
	int ch;

	fp = fopen("d:\\mysources\\file.txt", "r");

	if (fp == NULL)
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		ch = fgetc(fp);
		printf("읽은 문자: %c \n", ch);
		fclose(fp);
	}
}