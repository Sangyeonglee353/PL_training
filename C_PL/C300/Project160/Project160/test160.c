// ���� �����ϱ�(remove)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	char* filename = "d:\\mysources\\file_1.txt";

	if (remove(filename))
	{
		perror("���� ���� ����");
	}
	else
	{
		puts("������ ���������� �����Ͽ����ϴ�.");
	}
}