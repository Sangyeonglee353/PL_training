// [�ǽ� ���� 2-2] MaxMin, �ִ밪�� �ּҰ� ���ϱ�
#include <stdio.h>
#define SIZE 5 // �迭�� ũ�� ����

void MaxMin(int* arr, int** Max, int** Min); // �ִ밪�� �ּҰ��� ���ϴ� �Լ� ����

int main(void) {
	int arr[SIZE] = { 0, }; // �迭 ���� �� �ʱ�ȭ
	int* Max = NULL; // �ִ밪 ������ ����
	int* Min = NULL; // �ּҰ� ������ ����

	for (int num = 0; num < SIZE; num++) { // ���� �Է� �ޱ�
		scanf("%d", &arr[num]);
	}

	MaxMin(arr, &Max, &Min); // �������� �ּ� ����
	printf("�ִ밪: %d, �ּҰ�: %d", *Max, *Min); // ���� ���������ڷ� �������� �� ���

	return 0;
}

// �ִ밪�� �ּҰ��� ���ϴ� �Լ� ����
void MaxMin(int* arr, int** Max, int** Min)
{
	*Max = &arr[0];
	*Min = &arr[0];

	for (int i = 0; i < SIZE; i++) { // �ִ밪 �ּ� ����
		if (**Max < arr[i]) {
			*Max = &arr[i];
		}
	}

	for (int i = 0; i < SIZE; i++) { // �ּҰ� �ּ� ����
		if (**Min > arr[i]) {
			*Min = &arr[i];
		}
	}
}
