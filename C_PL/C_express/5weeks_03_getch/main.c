// [���� 2] �پ��� ����ó�� ���̺귯�� ����� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main(void)
{
	int c;

	while ((c = _getch()) != 'z') // ���ڰ� ���� ���۸� ������� �ʾ� ���� �Է½� �ٷ� ����
	{
		printf("----------------\n");
		printf("isdigit(%c) = %d\n", c, isdigit(c)); // �������� �˻�
		printf("isalpha(%c) = %d\n", c, isalpha(c)); // ���ĺ����� �˻�
		printf("islower(%c) = %d\n", c, islower(c)); // �ҹ������� �˻�
		printf("ispunct(%c) = %d\n", c, ispunct(c)); // ������ �������� �˻�
		printf("isxdigit(%c) = %d\n", c, isxdigit(c)); // 16�������� �˻�
		printf("isprintf(%c) = %d\n", c, isprint(c)); // ��°������� �˻�
		printf("----------------\n");
	}

	return 0;
}