#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i = 3000;
	int* p = &i; // ������ ������ ����

	// %u: ��ȣ�� ���� ����(������)�� ���
	// %d: ��ȣ�� �ִ� ����(������)�� ���

	printf("&i = %u\n", &i); // ������ �ּ� ���
	printf("i = %d\n", i);   // ������ �� ���
	
	printf("p = %u\n", p);   // �������� �� ���(������ �ּ�)
	printf("*p = %d\n", *p); // �����͸� ���� ���� ���� �� ���

	return 0;
}