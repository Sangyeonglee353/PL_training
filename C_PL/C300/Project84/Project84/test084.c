// ������ ���ڿ��� ��ȯ�ϱ� 2 (Itoa)
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	long value;
	char string[100];
	int radix;

	radix = 2; // 2����

	value = 12345;
	_ltoa(value, string, radix);
	printf("��ȯ�� ���ڿ��� %s�Դϴ�. \n", string);

	value = -12345;
	_ltoa(value, string, radix);
	printf("��ȯ�� ���ڿ��� %s�Դϴ�. \n", string);
}