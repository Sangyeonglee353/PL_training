#include <stdio.h>

void AddNumber(int a, int b); // ��ȯ���� ���� �Լ� ����

int main(void) {
	int num1 = 1; // num1 ���� ���� �� 1�� �ʱ�ȭ
	int num2 = 2; // num2 ���� ���� �� 2�� �ʱ�ȭ

	AddNumber(num1, num2); // �Լ� ȣ��

	return 0;
}

void AddNumber(int a, int b) // ��ȯ���� ���� �Լ� ����
{
	int c; // c ���� ����
	c = a + b; // a+b�� ����Ͽ� c�� ����
	printf("%d\n", c); // a+b ���� ���
}

