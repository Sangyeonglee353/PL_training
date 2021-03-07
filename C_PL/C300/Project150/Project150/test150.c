// 파일 포인터의 현재 위치 구하기 2(fgetpos)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;
	fpos_t pos;

	fp = fopen("d:\\mysources\\file.txt", "w+");

	if (fp == NULL)
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		fputs("abcde", fp);
		fgetpos(fp, &pos);
		printf("파일 포인터의 위치: %d \n", pos); // 위치: 5
		fclose(fp);
	}
}