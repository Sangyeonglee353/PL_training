// ���� �������� ���� ��ġ ���ϱ� 2(fgetpos)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;
	fpos_t pos;

	fp = fopen("d:\\mysources\\file.txt", "w+");

	if (fp == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		fputs("abcde", fp);
		fgetpos(fp, &pos);
		printf("���� �������� ��ġ: %d \n", pos); // ��ġ: 5
		fclose(fp);
	}
}