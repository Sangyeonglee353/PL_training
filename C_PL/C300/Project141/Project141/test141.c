// 파일에 형식화된 문자열 쓰기(fprint)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;
	int i = 12345;

	fp = fopen("d:\\mysources\\file.txt", "w+");

	if (fp == NULL)
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		fprintf(fp, "%d", i);
		fclose(fp);
	}
}