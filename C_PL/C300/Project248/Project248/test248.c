// 오늘 날짜로부터 크리스마스까지의 남은 시간 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void main(void)
{
	time_t now;
	struct tm t, christmas = { 0, 0, 0, 25, 12, 2021 };
	int n1, n2, nChristmas;

	now = time(NULL);
	t = *localtime(&now);

	christmas.tm_year -= 1900; // struct tm 형식으로 변환
	christmas.tm_mon -= 1;

	n1 = mktime(&t);
	n2 = mktime(&christmas);

	nChristmas = (n2 - n1);
	christmas = *localtime(&nChristmas);


	printf("오늘 날짜는 %s", ctime(&now));
	printf("크리스마스까지 남은 시간은 %d개월 %d일 %d시간 %d분 %d초입니다. \n",
		christmas.tm_mon, christmas.tm_mday,
		christmas.tm_hour, christmas.tm_min, christmas.tm_sec);
}