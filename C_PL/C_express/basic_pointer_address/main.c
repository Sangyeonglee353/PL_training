// ������ ���� ����

#include <stdio.h>

int main(void) {
	int num1 = 10; // ������ ���� num1 ���� �� �ʱ�ȭ
	float float1 = 28.8; // �Ǽ��� ���� float1 ���� �� �ʱ�ȭ
	char char1 = 'K'; // ������ ���� char1 ���� �� �ʱ�ȭ
	
	//printf("=== �������� ũ�� ===\n");
	//printf("num1�� ũ��:%d\n", sizeof(num1)); // num1�� ũ�� ���
	//printf("float1�� ũ��:%d\n", sizeof(float1)); // float1�� ũ�� ���
	//printf("char1�� ũ��:%d\n\n", sizeof(char1)); // char1�� ũ�� ���

	//printf("=== �������� �ּ� ===\n");
	//printf("num1�� �ּ�:%u\n", &num1); // num1�� �ּ� ���
	//printf("float1�� �ּ�:%u\n", &float1); // float1�� �ּ� ���
	//printf("char1�� �ּ�:%u\n\n", &char1); // num2�� �ּ� ���

	int* p; // ���� ������ ���� ����
	p = &num1; // ������ ���� p�� num1�� �ּҸ� ����

	printf("=== �������� ũ�� ===\n");
	printf("num1�� ũ��:%d\n", sizeof(num1)); // num1�� ũ�� ���
	printf("p�� ũ��:%d\n", sizeof(p)); // p�� ũ�� ���
	printf("*p�� ũ��:%d\n\n", sizeof(*p)); // *p�� ũ�� ���

	printf("=== �������� �ּ� ===\n");
	printf("num1�� �ּ�:%u\n", &num1); // num1�� �ּ� ���
	printf("p�� �ּ�:%u\n", &p); // p�� �ּ� ���
	printf("*p�� �ּ�:%u\n\n", &*p); // *p�� �ּ� ���

	printf("=== ������ �� ��� ===\n");
	printf("num1�� ��:%d\n", num1); // num1�� �� ���
	printf("p�� ��:%d\n", p); // p�� �� ���
	printf("*p�� ��:%d\n\n", *p); // *p�� �� ���

	return 0;
}