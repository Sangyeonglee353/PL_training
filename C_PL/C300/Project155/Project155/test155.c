// 파일 처리 시 발생된 에러 표시하기(perror)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;
	int ch;

	fp = fopen("d:\\mysources\\file_NAME.txt", "r");

	if (fp == NULL)
	{
		puts("파일 개방 에러");
	}
	else
	{
		ch = fgetc(fp);
		if (ferror(fp))
		{
			perror("파일 읽기 에러");
		}
		fclose(fp);
	}
}