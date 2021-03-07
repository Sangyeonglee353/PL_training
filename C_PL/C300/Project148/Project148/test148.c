// 파일 포인터를 임의의 위치로 이동하기(fseek)
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
		fputs("abcde", fp);
		printf("파일 포인터의 위치: %d \n", ftell(fp)); // 위치: 5
		fseek(fp, -2L, SEEK_CUR);
		printf("파일 포인터의 위치: %d \n", ftell(fp)); // 위치: 3
	}
}