// ������ ���� ���ϱ�(fseek)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;

	fp = fopen("d:\\mysources\\file.txt", "r");

	if (fp == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		fseek(fp, 0L, SEEK_END);
		printf("������ ����: %d \n", ftell(fp)); // ����: 5
		fclose(fp);
	}
}