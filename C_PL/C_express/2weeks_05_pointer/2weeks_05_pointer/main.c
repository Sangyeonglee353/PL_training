#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char ch;
	int in;
	double db;

	*&ch = 'A'; // ������ &ch�� ����Ű�� ������(1����Ʈ)�� 'A'�� �����Ѵ�.
	*&in = 100; // ������ &in�� ����Ű�� ������(4����Ʈ)�� ���� 100�� �����Ѵ�.
	*&db = 3.14159; // ������ &db�� ����Ű�� ������(8����Ʈ)�� �ε��Ҽ� 3.14159�� �����Ѵ�.

	printf("���� ch�� ����� ����: %c \n", ch);
	printf("���� in�� ����� ����: %d \n", in);
	printf("���� db�� ����� ��: %lf \n", db);

	return 0;
}