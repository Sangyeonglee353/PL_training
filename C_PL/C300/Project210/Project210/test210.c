// 2���� ���ڿ��� 16���� ���ڿ��� ��ȯ�ϱ�(strtol, itoa)
#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>
#include <stdlib.h>

void main(void)
{
	int radix = 16; // ��ȯ�� ����� 16����
	int base = 2; // ��ȯ�� ���ڿ��� 2����
	char string[] = "10101011";
	char* stop;
	long value;
	char buff[100];

	value = strtol(string, &stop, base); // 10������ ��ȯ
	_itoa(value, buff, radix); // 16���� ���ڿ��� ��ȯ
	puts(buff); // "ab"
}