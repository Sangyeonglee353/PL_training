// [�ǽ� ���� 3-1] : OddEvenSort, 10���� ������ �Է¹޾� Ȧ¦���� �迭 �����ϱ�
#include <stdio.h>
#define SIZE 10 // �迭�� ũ�� SIZE�� 10���� ����

void OddEvenSort(int* arr, int num); // Ȧ¦ ���� �Լ� ����

int main(void) {
	int arr[SIZE] = { 0, }; // �迭�� �����ϰ� 0���� �ʱ�ȭ
	int num; // �Է¹��� ���� �ӽ������� ���� num ����

	// SIZE�� �ٲ��شٸ� 10�� �̿��� ���ڵ� ����
	printf("%d���� ������ �Է����ּ���.\n", SIZE); 
	for (int i = 0; i < SIZE; i++) { // ����ڷκ��� �� �Է¹޾� ����
		scanf("%d", &num);
		OddEvenSort(arr, num); // Ȧ¦ �����Ͽ� �迭�� ����
	}
	
	printf("\n[�迭 ���� ��]\n");
	for (int i = 0; i < SIZE; i++) { // ���ĵ� �� ���
		printf("%d ", arr[i]);
	}
	return 0;
}

// Ȧ¦ ���� �Լ� ����
void OddEvenSort(int* arr, int num)
{
	static indexOdd = 0; // Ȧ�� �ε��� ����
	static indexEven = SIZE - 1; // ¦�� �ε��� ����
	if (num % 2 != 0) { // Ȧ���̸� �տ������� ����
		arr[indexOdd] = num;
		indexOdd++; // Ȧ�� �ε����� ����
	}
	else { // ¦���̸� �ڿ������� ����
		arr[indexEven] = num;
		indexEven--; // ¦�� �ε����� ����
	}
}