// �������� 16���� ���ڿ��� ��ȯ�ϱ�(itoa)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char buff[100];
	int radix = 17;

	_itoa(10, buff, radix);
	puts(buff); // "a"

	_itoa(255, buff, radix);
	puts(buff); // "ff"
}