// ���Ͽ��� ���ڿ� �б�(fgets)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;
	char buffer[100];

	fp = fopen("d:\\mysources\\file.txt", "r");

	if (fp == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		fgets(buffer, 100, fp);
		puts(buffer);
		fclose(fp);
	}
}