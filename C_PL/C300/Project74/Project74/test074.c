#include <stdio.h>
#include <string.h>

void main(void)
{
	char string[100];

	puts("���ܾ �Է��� �� EnterŰ�� ġ����!");
	puts("�ƹ� ���ڵ� �Է����� ������ ���α׷��� ����˴ϴ�!");

	do
	{
		gets(string);

		if (strlen(string) == 0)
		{
			break;
		}

		_strrev(string);
		puts(string);
	} while (1);
}