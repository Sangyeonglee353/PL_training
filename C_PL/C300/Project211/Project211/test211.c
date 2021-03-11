// 소문자를 대문자로 변환하기

#include<stdio.h>
#include<string.h>

void main(void)
{
	char string[] = "abcdefghijklmnopqrstuvwxyz";
	unsigned i, len;

	puts(string);

	len = strlen(string); // 문자열의 길이
	for (i = 0; i < len; i++)
	{
		string[i] = string[i] & 0xDF; // 0xDF는 2진수로 1101 1111
	}

	puts(string);
}