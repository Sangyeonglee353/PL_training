#include <stdio.h>

int AddNumber(int a, int b); // ��ȯ���� �ִ� �Լ� ����

int main(void) {
	int num1 = 1; // num1 ���� ���� �� 1�� �ʱ�ȭ
	int num2 = 2; // num2 ���� ���� �� 2�� �ʱ�ȭ
	int num3;     // num3 ���� ����

	num3 = AddNumber(num1, num2); // a+b ���� �����Ͽ� num3�� ����

	printf("%d\n", num3); // a+b ���� ���
	
	return 0;
}

int AddNumber(int a, int b) // ��ȯ���� �ִ� �Լ� ����
{
	int c; // c ���� ����

	c = a + b; // a+b�� ����Ͽ� c�� ����
	
	return c; // c���� ��ȯ��
}


