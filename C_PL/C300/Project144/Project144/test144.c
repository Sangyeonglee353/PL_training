// ���� �������� ���� ��ġ ���ϱ� 1(ftell)
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
		printf("���� �������� ��ġ: %d \n", ftell(fp)); // 0
		fputs("abcde", fp);
		printf("���� �������� ��ġ : %d \n", ftell(fp)); // 5
		fclose(fp);
	}
}