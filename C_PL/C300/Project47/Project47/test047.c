#include <stdio.h>

int printf(char* string);

main()
{
	print("This is a function!");
}

int print(char* string)
{
	int len = 0;

	while (*string != (char)NULL)
	{
		printf("%c", *string);
		string++; // ���� ���� 1 ����
		len++; // ���ڿ��� ���̸� 1 ����
	}

	return len;
}