// 날짜 및 시간을 더하거나 빼기(mktime)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

void main(void)
{
	time_t now;
	struct tm t;

	time(&now);
	t = *localtime(&now);
	t.tm_mday += 100;
	mktime(&t);

	printf("현재 날짜에 100일 더한 날짜: %4d.%d.%d %d:%d:%d \n",
		t.tm_year + 1900, t.tm_mon + 1, t.tm_mday,
		t.tm_hour, t.tm_min, t.tm_sec);
}