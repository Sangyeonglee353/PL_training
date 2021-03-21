// 파일에서 특정 문자열 검색하기(strstr)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main(void)
{
	FILE* fp;
	char buff[200];
	int line = 1;

	fp = fopen("D:\\mysources\\file_1.txt", "r");

	if (fp == NULL)
	{
		perror("파일 읽기 개방 에러");
		return;
	}

	while (!feof(fp))
	{
		fgets(buff, 200, fp);

		if (strstr(buff, "대한민국"))
		{
			printf("Line(%2d): %s", line, buff);
		}
		line ++;
	}
	_fcloseall();
}