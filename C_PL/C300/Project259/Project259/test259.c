// AM/PM ǥ���ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <string.h>

void main(void)
{
	time_t now;
	struct tm t;
	char buff[100], AMPM[10];

	now = time(NULL);
	t = *localtime(&now);
	strftime(buff, sizeof(buff), "%Y-%m-%d %H:%M:%S ", &t);

	strftime(AMPM, sizeof(AMPM), "%p", &t);
	if (strcmp(buff, "����"))S
	{
		strcpy(AMPM, "AM");
	}
	else if (strcmp(buff, "����"))
	{
		strcpy(AMPM, "PM");
	}
	strcat(buff, AMPM);

	puts(buff);
}