// ��¥ �� �ð��� ���ڿ��� ��ȯ�ϱ�(ctime)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void main(void)
{
	time_t now;

	time(&now);

	printf("���� ��¥ �� �ð�: %s", ctime(&now));
}