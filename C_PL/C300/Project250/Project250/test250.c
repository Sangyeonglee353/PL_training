// 크라스마스의 요일 구하기

#include <stdio.h>
#include <time.h>

void main(void)
{
	struct tm christmas = { 0, 0, 0, 25, 12 - 1, 2020 - 1900 };
	char* wday[] = { "일", "월", "화", "수", "목","금", "토" };
	char buff[100];

	mktime(&christmas);

	strftime(buff, sizeof(buff), "2020년 12월 25일은 %A입니다.", &christmas);

	puts(buff);
	printf("2020년 12월 15일은 %s요일입니다. \n", wday[christmas.tm_wday]);
}