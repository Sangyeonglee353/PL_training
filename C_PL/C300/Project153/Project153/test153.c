// ������ ���� �����ߴ��� �˻��ϱ�(feof)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;
	int ch;

	fp = fopen("d:\\mysources\\file.txt", "r");

	if (fp == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		while (!feof(fp))
		{
			ch = fgetc(fp);
			printf("���� ����: %c \n", ch);
		}
		fclose(fp);
	}
}