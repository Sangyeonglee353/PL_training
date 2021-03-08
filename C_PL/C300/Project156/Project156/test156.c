// 임시 파일 이름 만들기(tmpnam)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int i;
	char buffer[500];
	char* path;

	for (i = 0; i < 10; i++)
	{
		tmpnam(buffer);
		puts(buffer);
	}

	for (i = 0; i < 10; i++)
	{
		path = _tempnam("", "test");
		puts(path);
	}
}