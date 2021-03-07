// 파일 포인터의 현재 위치 설정하기(fsetpos)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;
	fpos_t pos;

	fp = fopen("d:\\mysources\\file.txt", "w+");

	fgetpos(fp, &pos); // pos: 0
	fputs("abcde", fp); // 파일 포인터의 위치: 5
	fsetpos(fp, &pos); // 파일 포인터의 위치: 0
	printf("파일 포인터의 위치: %d \n", ftell(fp)); // 위치: 0
	fclose(fp);
}