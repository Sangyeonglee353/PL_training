// ���Ͽ��� ����ȭ�� ���ڿ� �б�(fscanf)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;
	int i;

	fp = fopen("d:\\mysources\\file.txt", "r");

	if (fp == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		fscanf(fp, "%d", &i);
		printf("i= %d\n", i);
		fclose(fp);
	}
}