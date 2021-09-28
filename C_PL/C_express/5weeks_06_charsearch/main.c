// [예제 5] 문자 검색
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "language";
	char c = 'g';
	char* p;
	int loc;

	p = strchr(s, c); // s안에서 문자 c를 찾는다.
	loc = (int)(p - s);
	if (p != NULL)
		printf("첫번째 %c가 %d에서 발견되었음\n\n", c, loc);
	else
		printf("%c가 발견되지 않았음\n\n", c);
	return 0;
}