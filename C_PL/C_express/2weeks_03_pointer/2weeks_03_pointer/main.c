#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i = 10;
	int* p;

	p = &i;
	printf("i = %d\n", i);

	*p = 20; // i=20; 간접 참조의 값을 20으로 변경
	printf("i = %d\n", i);
	return 0;
}