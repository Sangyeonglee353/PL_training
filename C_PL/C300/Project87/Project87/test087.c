// �Ǽ��� ���ڿ��� ��ȯ�ϱ� 2(ecvt)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	double value;
	char* pstr;
	int dec, sign;

	value = 3.14e10;
	pstr = _ecvt(value, 3, &dec, &sign);

	printf("��ȯ�� ���ڿ��� %s�Դϴ�. \n", pstr);
	printf("�Ҽ����� ��ġ�� %d, ��ȣ�� %d�Դϴ�. \n", dec, sign);

	value = -3.4e10;
	pstr = _ecvt(value, 3, &dec, &sign);

	printf("��ȯ�� ���ڿ��� %s�Դϴ�. \n", pstr);
	printf("�Ҽ����� ��ġ�� %d, ��ȣ�� %d�Դϴ�. \n", dec, sign);
}