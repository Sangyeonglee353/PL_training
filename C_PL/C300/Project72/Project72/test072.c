#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

// ���ڿ��� �빮�ڷ� ��ȯ�ϱ�(strupr)
void main(void)
{
	char string[100];

	puts("���ڿ��� �Է��� �� EnterŰ�� ġ����!");
	puts("�ƹ� ���ڵ� �Է����� ������ ���α׷��� ����˴ϴ�.!");

	do
	{
		gets(string);

		if (strlen(string) == 0)
		{
			break;
		}

		_strupr(string);
		puts(string);
	} while (1);
}