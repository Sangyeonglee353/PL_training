// ���ڿ��� �� ��¥�� time_t �������� ��ȯ�ϱ�(atoi, mktime)

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(void)
{
	char date[] = "2020-06-23";
	time_t now;
	struct tm t = { 0, };

	t.tm_mday = atoi(&date[8]);
	date[7] = 0;
	t.tm_mon = atoi(&date[5]) - 1;
	date[4] = 0;
	t.tm_year = atoi(&date[0]) - 1900;

	now = mktime(&t);
	printf("2020-06-23�� time_t�� ��ȯ�ϸ� %d�Դϴ�. \n", now);

}