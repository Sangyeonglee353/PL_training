// ���� �����͸� ������ ��ġ�� �̵��ϱ�(fseek)
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
		fputs("abcde", fp);
		printf("���� �������� ��ġ: %d \n", ftell(fp)); // ��ġ: 5
		fseek(fp, -2L, SEEK_CUR);
		printf("���� �������� ��ġ: %d \n", ftell(fp)); // ��ġ: 3
	}
}