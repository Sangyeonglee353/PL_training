#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

// 문자열을 대문자로 변환하기(strupr)
void main(void)
{
	char string[100];

	puts("문자열을 입력한 후 Enter키를 치세요!");
	puts("아무 문자도 입력하지 않으면 프로그램은 종료됩니다.!");

	do
	{
		gets(string);

		if (strlen(string) == 0)
		{
			break;
		}

		_strupr(string);
		puts(string);
	} while (1);
}