// 문자열에서 특정 위치의 문자 교체하기(strnset)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void)
{
	char string[] = "암호는 Korea입니다.";
	char* pstr;

	pstr = strstr(string, "Korea");
	if (pstr)
	{
		_strnset(pstr, '*', 5);
	}
	puts(string);
}