// ���� �����͸� ������ �̵��ϱ�(fseek)
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
		printf("���� �������� ��ġ: %d \n", ftell(fp)); // ��ġ: 0
		fputs("abcde", fp);
		printf("���� �������� ��ġ: %d \n", ftell(fp)); // ��ġ: 5
		rewind(fp);
		printf("���� �������� ��ġ: %d \n", ftell(fp)); // ��ġ: 0
		fseek(fp, 0L, SEEK_END);
		printf("���� �������� ��ġ: %d \n", ftell(fp)); // ��ġ: 5
		fclose(fp);
	}
}