// [예제 6] 문자열 검색
#define _CRT_SECURE_NO_WANRINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char s[] = "A joy that's shared is a joy made double";
	char sub[] = "joying";
	char* p;
	int loc;
	p = strstr(s, sub);
	loc = (int)(p - s);
	if (p != NULL)
		printf("첫번째 %s가 %d에서 발견되었음\n", sub, loc);
	else
		printf("%s가 발견되지 않았음\n", sub);

	return 0;
}