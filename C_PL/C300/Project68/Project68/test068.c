#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// ���ڿ��� �����ڷ� �и��ϱ� 1(strtok)

#define TOKEN " "

void main(void)
{
	char string[100];
	char *token;

	puts("���ڿ��� �Է��� �� EnterŰ�� ġ����!");

	gets(string);

	token = strtok(string,TOKEN);

	while (token != NULL)
	{
		puts(token);

		token = strtok(NULL,TOKEN);
	}
}