/* ���� pointer1-3.c */
#include <stdio.h>

int test_main(void)
{
	int a = 2022;
	int* pA = &a;
	printf("a�� �ּ�(&a): %p \n", &a); // a�� �ּҰ� ���
	printf("a�� �ּ�(pA): %p \n", pA); // ������ ���� pA ���� ���
	printf("a= %d \n", *pA); // a�� 2022 ���
	printf("pA�� �ּ�(&pA): %p \n", &pA);
	printf("a�� �ּ�(&*pA): %p \n", &*pA);
	printf("*&*pA= %d \n", *&*pA);
	return 0;
}