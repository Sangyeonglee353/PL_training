// 문자열을 NULL로 채우기(strset)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main(void)
{
	char buff[] = "암호는 Korea입니다.";

	puts(buff);
	_strset(buff, 0);
	printf("[%s] \n", buff);
}