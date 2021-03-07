// 파일에 한 문자 쓰기(fputc)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;

	fp = fopen("d:\\mysources\\file.txt", "w+");

	if (fp == NULL)
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		fputc('A', fp);
		puts("문자 'A'를 파일에 저장하였습니다.");
		fclose(fp);
	}
}