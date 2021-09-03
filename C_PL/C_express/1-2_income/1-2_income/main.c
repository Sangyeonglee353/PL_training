// income, �ǽ����� 1-2 | �ҵ漼 ����ϱ�
#include <stdio.h>
#define Tax1 0.08 // ���� 1 ����
#define Tax2 0.10 // ���� 2 ����

double get_tax(int income); // �ҵ漼 ��� �Լ� ����

int main(void) {
	int income;

	printf("�ҵ��� �Է��ϼ���(õ��): ");
	scanf("%d", &income);

	printf("�ҵ漼�� %.f�����Դϴ�.\n", get_tax(income));

	return 0;
}

double get_tax(int income) // �ҵ漼 ��� �Լ� ����
{
	if (income/10 <= 1000) { // 1,000���� ������ ���
		return (income/10) * Tax1;
	}
	else { // 1,000���� �ʰ��� ���
		return 1000 * Tax1 + (income/10 - 1000) * Tax2;
	}
}