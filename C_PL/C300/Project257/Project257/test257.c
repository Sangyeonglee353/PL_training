// 오늘의 요일 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>
#include <time.h>

void main(void)
{
	time_t now;
	struct tm t;
	char buff[100];

	now = time(NULL);
	t = *localtime(&now);
	strftime(buff, sizeof(buff), "요일: %A", &t);
	puts(buff);
	strftime(buff, sizeof(buff), "요일: %a", &t);
	puts(buff);
	printf("%d \n", t.tm_wday);
}