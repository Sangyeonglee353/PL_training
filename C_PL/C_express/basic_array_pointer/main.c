#include <stdio.h>
#define SIZE 5 // �迭�� ũ�� ����
void ArraySum(int *arr, int *arr_size); // ��ȯ���� ���� �迭 �հ� �Լ� ����

int main(void) {

	int arr[] = { 1, 2, 3, 4, 5 }; // �迭 ���� �� �ʱ�ȭ
	int arr_size = sizeof(arr) / sizeof(int); // �迭�� ũ�⸦ ���� �ʱ�ȭ

	ArraySum(arr, &arr_size); 

	return 0;
}

void ArraySum(int *arr, int *arr_size) // ��ȯ���� ���� �迭 �հ� �Լ� ����
{
	int total = 0;

	for (int i = 0; i < SIZE; i++) { // �ݺ������� �迭�� �հ� ���ϱ�
		total += (*arr++);
	}

	printf("�迭�� �հ�: %d\n", total); // �迭�� �հ� ���
	printf("�迭�� ũ��: %d\n", *arr_size); // �迭�� ũ�� ���
}