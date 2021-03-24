// d-day 구하기(mktime)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

#define DAYSEC 86400L

void main(void)
{
	time_t now;
	struct tm t, dday = { 0, 0, 0, 8, 8, 2020 }; // 2020년 9월 8일
	int n1, n2, nDday;

	now = time(NULL);
	t = *localtime(&now);

	dday.tm_year -= 1900; // struct tm 형식으로 변환
	dday.tm_mon -= 1;

	t.tm_hour = 0;
	t.tm_min = 0;
	t.tm_sec = 0;

	n1 = mktime(&t);
	n2 = mktime(&dday);

	nDday = (n2 - n1) / DAYSEC;

	printf("오늘은 날짜 %s", ctime(&now));
	printf("최수린의 생일: %d일 남았습니다. (%d/%d/%d) \n",
		nDday, dday.tm_year + 1900, dday.tm_mon + 1, dday.tm_mday);
}