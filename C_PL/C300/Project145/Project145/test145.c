// ���� �����͸� ó������ �̵��ϱ� 1(fseek)
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
		fseek(fp, 0L, SEEK_SET);
		printf("���� �������� ��ġ: %d \n", ftell(fp)); // ��ġ: 0
		fclose(fp);
	}
}