// d-day ���ϱ�(mktime)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

#define DAYSEC 86400L

void main(void)
{
	time_t now;
	struct tm t, dday = { 0, 0, 0, 8, 8, 2020 }; // 2020�� 9�� 8��
	int n1, n2, nDday;

	now = time(NULL);
	t = *localtime(&now);

	dday.tm_year -= 1900; // struct tm �������� ��ȯ
	dday.tm_mon -= 1;

	t.tm_hour = 0;
	t.tm_min = 0;
	t.tm_sec = 0;

	n1 = mktime(&t);
	n2 = mktime(&dday);

	nDday = (n2 - n1) / DAYSEC;

	printf("������ ��¥ %s", ctime(&now));
	printf("�ּ����� ����: %d�� ���ҽ��ϴ�. (%d/%d/%d) \n",
		nDday, dday.tm_year + 1900, dday.tm_mon + 1, dday.tm_mday);
}