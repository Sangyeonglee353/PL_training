// �Ǽ��� ���ڿ��� ��ȯ�ϱ� 1(fcvt)
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	double value;
	char* pstr;
	int dec, sign;

	value = 3.1415926535;
	pstr = _fcvt(value, 6, &dec, &sign);

	printf("��ȯ�� ���ڿ��� %s�Դϴ�. \n", pstr);
	printf("�Ҽ����� ��ġ�� %d, ��ȣ�� %d�Դϴ�. \n", dec, sign);

	value = -3.1415926535;
	pstr = _fcvt(value, 8, &dec, &sign);

	printf("��ȯ�� ���ڿ��� %s�Դϴ�. \n", pstr);
	printf("�Ҽ����� ��ġ�� %d, ��ȣ�� %d�Դϴ�. \n", dec, sign);
}