// ���Ͽ� �� ���� ����(fputc)
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
		fputc('A', fp);
		puts("���� 'A'�� ���Ͽ� �����Ͽ����ϴ�.");
		fclose(fp);
	}
}