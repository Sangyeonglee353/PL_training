// ������ ���� ���ϱ�
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
	strftime(buff, sizeof(buff), "����: %A", &t);
	puts(buff);
	strftime(buff, sizeof(buff), "����: %a", &t);
	puts(buff);
	printf("%d \n", t.tm_wday);
}