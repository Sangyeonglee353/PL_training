// ���Ͽ��� �� ���� �б�(fgetc)
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
		ch = fgetc(fp);
		printf("���� ����: %c \n", ch);
		fclose(fp);
	}
}