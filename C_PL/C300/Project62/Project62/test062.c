#include <stdio.h>
#include <string.h>

// ���ڿ� �����ϱ�(strcat)
void main(void)
{
	char string1[100];
	char string2[100];

	printf("ù ��° �ܾ �Է��ϼ���!\n");
	gets(string1);

	printf("�� ��° �ܾ �Է��ϼ���!\n");
	gets(string2);

	strcat_s(string1, 100, string2);

	puts(string1);
}