// ����Ϸκ��� ���ñ����� ����� �� ���ϱ�(mktime)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

#define DAYSEC (24*60*60) // �ݵ�� ��ȣ�� ����� �մϴ�.

void main(void)
{
	time_t n1, n2;
	struct tm t1, t2;
	double elapsed;

	t1.tm_year = 1990; // ��(2003��)
	t1.tm_mon = 10 - 1; // ��,(������-1)�� �� (10��)
	t1.tm_mday = 12; // ��(15��)
	t1.tm_hour = 0; // ��
	t1.tm_min = 0; // ��
	t1.tm_sec = 0; // ��

	n1 = time(NULL); 
	t2 = *localtime(&n1);

	n1 = mktime(&t1);
	n2 = mktime(&t2);

	n2 = n2 - n1;
	elapsed = (double)(n2 / DAYSEC);

	printf("�輭���� �¾ �� %.f��° �Դϴ�. \n", elapsed);
}