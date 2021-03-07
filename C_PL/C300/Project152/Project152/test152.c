// 파일 닫기(fclose)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;

	fp = fopen("d:\\mysources\\file.txt", "w+");

	fputs("fclose() 함수", fp);
	fclose(fp);
}