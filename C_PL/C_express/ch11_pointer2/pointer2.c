// 간접 참조 연산자 * 주소 변경
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int x = 10, y = 20;
	int* p;

	p = &x;
	printf("&x = %u\n", &x);
	printf("p = %u\n\n", p);
	printf("x = %d\n", x);
	printf("*p = %d\n\n", *p);

	p = &y;
	printf("&y = %u\n", &y);
	printf("p = %u\n\n", p);
	printf("y = %d\n", y);
	printf("*p = %d\n\n", *p);

	return 0;
}