// [�ǽ� 1-1] ������ �Է¹޾� Ȧ���� ¦�� ����ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void odd_display(int*);  // Ȧ�� ��� �Լ� ����
void even_display(int*); // ¦�� ��� �Լ� ����

int main(void) {

	int input[10]; // ũ�Ⱑ 10�� �迭 ����

	for (int i = 0; i < 10; i++) {
		scanf("%d", &input[i]);
	}

	odd_display(input);
	even_display(input);

	return 0;
}

void odd_display(int* a) // Ȧ�� ��� �Լ� ����
{
	printf("Ȧ�����: ");
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 != 0) {
			printf("%d, ", a[i]);
		}
	}
	printf("\n");

}

void even_display(int* a) // ¦�� ��� �Լ� ����
{
	printf("¦�����: ");
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 == 0) {
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
