// ������ ����� ���� �� ���ϱ�(strftime)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void main(void)
{
	time_t now;
	struct tm t;
	char buff[100];

	now = time(NULL);
	t = *localtime(&now);
	strftime(buff, sizeof(buff), "������ ����� ��: %U ��", &t);

	puts(buff);
}