#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i = 10;
	double f = 12.3;
	int* pi = NULL;
	double* pf = NULL;

	pi = &i;
	pf = &f;
	printf("pi: %u &i: %u\n", pi, &i); // pi = &i �� ���
	printf("pf: %u &f: %u\n", pf, &f); // pf = &f �� ���

	return 0;
}