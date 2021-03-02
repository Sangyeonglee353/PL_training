// 실수를 문자열로 변환하기 3(gcvt)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	double value;
	char buffer[100];

	value = 3.14e10;
	_gcvt(value, 3, buffer);

	printf("변환된 문자열은 %s입니다. \n", buffer);

	value = -3.14e10;
	_gcvt(value, 3, buffer);

	printf("변환된 문자열은 %s입니다. \n", buffer);
}