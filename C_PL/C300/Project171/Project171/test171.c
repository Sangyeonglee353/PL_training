// ���� ǥ�� �� ���ϱ�(gtime)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void main(void)
{
	time_t now;
	struct tm t;

	time(&now);

	t = *gmtime(&now);

	printf("���� ǥ�� ��: %4d.%d.%d %d:%d:%d \n",
		t.tm_year + 1900, t.tm_mon + 1, t.tm_mday,
		t.tm_hour, t.tm_min, t.tm_sec);
}