// ���ڿ��� ���� �ӽ� ����� �����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>

void main(void)
{
	char buff[] = "���ڿ� �����ϱ�";
	char* dup;

	dup = _strdup(buff);
	if (dup)
	{
		strcpy(buff, "�ٸ� ���ڿ�");
		puts(buff);
		puts(dup);
		free(dup);
	}
}