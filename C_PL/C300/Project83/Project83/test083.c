// ������ ���ڿ��� ��ȯ�ϱ� 1(itoa)
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int value;
	char string[100];
	int radix;

	radix = 10; // 10����

	value = 5;
	_itoa(value, string, radix);
	printf("��ȯ�� ���ڿ���  %s�Դϴ�. \n", string);

	value = -12345;
	_itoa(value, string, radix);
	printf("��ȯ�� ���ڿ��� %s�Դϴ�. \n", string);
}