#include <stdio.h>
#include <string.h>

// 문자열 중에서 일치되지 않는 첫 문자의 위치 구하기(strspn)
void main(void)
{
	char* string = "this is a very good!";
	char* strCharSet = "abcdefghijklmnopqrstuvwxyz ";  //주의: 공백 포함
	unsigned int pos;

	pos = strspn(string, strCharSet);

	puts("0              1                2                3");
	puts("0123456789");
	puts(string);
	puts(strCharSet);

	printf("%d 위치에서 일치되지 않는 문자르 발견하였스니다. \n", pos);
}