// ���� ó�� �� �߻��� ���� ǥ���ϱ�(perror)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;
	int ch;

	fp = fopen("d:\\mysources\\file_NAME.txt", "r");

	if (fp == NULL)
	{
		puts("���� ���� ����");
	}
	else
	{
		ch = fgetc(fp);
		if (ferror(fp))
		{
			perror("���� �б� ����");
		}
		fclose(fp);
	}
}