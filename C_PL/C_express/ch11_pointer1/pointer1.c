// 간접 참조 연산자 *
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i = 3000;
	int* p = NULL;

	p = &i;

	printf("p = %u\n", p);
	printf("&i = %u\n\n", &i);

	printf("i = %d\n", i);
	printf("*p = %d\n", *p);

	return 0;
}