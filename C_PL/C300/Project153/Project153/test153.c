// 파일의 끝에 도달했는지 검사하기(feof)
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
		while (!feof(fp))
		{
			ch = fgetc(fp);
			printf("읽은 문자: %c \n", ch);
		}
		fclose(fp);
	}
}