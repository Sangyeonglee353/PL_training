// ���Ͽ� ���ڿ� ����(fputs)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;

	fp = fopen("d:\\mysources\\file.txt", "w+");

	if (fp == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		fputs("���ѹα� \n", fp);
		fclose(fp);
	}
}