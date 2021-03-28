// 오전/오후 표시하기
#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>
#include <time.h>
#include <string.h>

void main(void)
{
	time_t now;
	struct tm t;
	char buff[100], AMPM[10];

	now = time(NULL);
	t = *localtime(&now);
	strftime(buff, sizeof(buff), "%Y-%m-%d %H:%M:%S", &t);

	strftime(AMPM, sizeof(AMPM), "%p", &t);
	if (strcmp(buff, "AM"))
	{
		strcpy(AMPM, "오전");
	}
	else if (strcmp(buff, "PM"))
	{
		strcpy(AMPM, "오후");
	}
	strcat(buff, AMPM);

	puts(buff);
}