// ���� ���� ������ *�� �̿��� ������ ����
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
	printf("===�� ���� ��===\n");
	printf("&i = %u\n", &i);
	printf("p = %u\n", p);
	printf("i = %d\n", i);
	printf("*p = %d\n", *p);

	return 0;
}