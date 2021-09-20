#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i = 10;
	double f = 12.3;
	int* pi = NULL;
	double* pf = NULL;

	pi = &i;
	pf = &f;
	printf("pi: %u &i: %u\n", pi, &i); // pi = &i 값 출력
	printf("pf: %u &f: %u\n", pf, &f); // pf = &f 값 출력

	return 0;
}