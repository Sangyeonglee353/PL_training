// ��¥ �� �ð��� �̱������� ��ȯ�ϱ�(asctime)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void main(void)
{
	time_t now;
	struct tm t;

	now = time(NULL);
	t = *localtime(&now);

	printf("���� ��¥ �� �ð�: %s \n",
		asctime(&t));
}