#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a = 2021;
	int* pA = &a;
	printf("a�� �ּ�(&a): %p \n", &a); // a�� �ּҰ� ���
	printf("a�� �ּ�(pA): %p \n", pA); // ������ ���� pA���� ���
	printf("a�� ��(a): %d \n", a);     // a�� �� ���
	printf("a�� ��(*pA): %d \n", *pA); // �����͸� ���� a�� �� ���
	printf("pA�� �ּ�(&pA): %p \n", &pA); // �������� �ּҰ� ���
	printf("a�� �ּ�(&*pA): %p \n", &*pA); // �������� �ּҰ��� �̿��� a�� �� ���
	printf("a�� ��(*&*pA): %d \n", *&*pA); // �������� �ּҰ��� �̿��� a�� �� ���

	return 0;
}