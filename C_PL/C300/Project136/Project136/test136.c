// ���� �����ϱ�(fopen)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* file;

	file = fopen("d:\\mysources\\file.txt", "w+");

	if (file == NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		puts("������ ���������� �����Ǿ����ϴ�.");
		fclose(file);
	}
}