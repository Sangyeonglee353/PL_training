// ��¥ �� �ð��� ���� ���ϱ�(difftime)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void main(void)
{
	time_t s1, s2;
	double gop;
	int i;

	time(&s1);

	for (i = 0; i < 10000000; i++)
	{
		gop = 1;
		gop = gop * 100;
	}

	time(&s2);

	printf("����ð�: %g ��\n", difftime(s2, s1));
}