#include <stdio.h>
#include <string.h>

// ���ڿ��� �����ڷ� �и��ϱ� 2(strpbrk)

#define TOKEN " "

void main(void)
{
	char string[100];
	char* pos;

	puts("���ڿ��� �Է��� �� EnterŰ�� ġ����!");

	gets(string);

	pos = strpbrk(string, TOKEN);

	while (pos != NULL)
	{
		puts(pos++);

		pos = strpbrk(pos, TOKEN);
	}
}