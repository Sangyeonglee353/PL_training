// ������ ����� ��¥ �� ���ϱ�(localtime)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<time.h>

void main(void)
{
	time_t now;
	struct tm t;

	now = time(NULL);
	t = *localtime(&now);

	printf("������ ����ϼ�: %d \n", t.tm_yday);
}