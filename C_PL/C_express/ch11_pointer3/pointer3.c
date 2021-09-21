// 간접 참조 연산자 *를 이용한 원본값 변경
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i = 10;
	int* p = NULL;

	p = &i;
	printf("&i = %u\n", &i);
	printf("p = %u\n", p);
	printf("i = %d\n", i);
	printf("*p = %d\n\n", *p);

	*p = 20;
	printf("===값 변경 후===\n");
	printf("&i = %u\n", &i);
	printf("p = %u\n", p);
	printf("i = %d\n", i);
	printf("*p = %d\n", *p);

	return 0;
}