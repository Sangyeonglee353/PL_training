// 실수를 문자열로 변환하기 1(fcvt)
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

	printf("변환된 문자열은 %s입니다. \n", pstr);
	printf("소수점의 위치는 %d, 부호는 %d입니다. \n", dec, sign);

	value = -3.1415926535;
	pstr = _fcvt(value, 8, &dec, &sign);

	printf("변환된 문자열은 %s입니다. \n", pstr);
	printf("소수점의 위치는 %d, 부호는 %d입니다. \n", dec, sign);
}