// Odd and Even, �ǽ����� 1-1 | Ȧ¦ �����ϱ�
#include <stdio.h>
#define SIZE 10 // �迭�� ���� ����

void Odd(int arr[], int n);   // Ȧ����� �Լ� ����
void Even(int  arr[], int n); // ¦����� �Լ� ����

int main(void) {
	int arr[SIZE];

	// �迭 �� �Էº�
	for (int i = 0; i < SIZE; i++){
		scanf("%d", &arr[i]);
	}
	
	Odd(arr, SIZE);
	printf("\n");
	Even(arr, SIZE);

	return 0;
}

void Odd(int arr[], int n) // Ȧ����� �Լ� ����
{
	printf("Ȧ�����: ");
	for (int i = 0; i < n; i++){
		if (arr[i] % 2 != 0){
			printf("%d,", arr[i]);
		}
	}
}

void Even(int arr[], int n) // ¦����� �Լ� ����
{
	printf("¦�����: ");
	for (int i = 0; i < n; i++){
		if (arr[i] % 2 == 0){
			printf("%d,", arr[i]);
		}
	}
}