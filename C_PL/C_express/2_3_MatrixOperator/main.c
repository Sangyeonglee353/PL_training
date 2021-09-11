// [�ǽ� ���� 2-3] MatrixOperator, 2���� �迭�� �հ� �� ���ϱ�
#include <stdio.h>
#define SIZE 4 // �迭�� ũ�� ����

void addition(int* A, int* B, int* C); // 2���� �迭�� �� ��� �Լ� ����
void multiply(int* A, int* B, int* C); // 2���� �迭�� �� ��� �Լ� ����

int main(void) {
	int A[SIZE][SIZE] = { {1,2,3,4}, {5,6,7,8}, {3,2,1,0}, {2,3,4,5} };
	int B[SIZE][SIZE] = { {-1,-2,-3,-4}, {1,2,3,4}, {3,4,5,6}, {2,1,-1,-2} };
	int C[SIZE][SIZE] = { 0 };

	addition(*A, *B, *C);
	multiply(*A, *B, *C);

	return 0;
}

// 2���� �迭�� �� ��� �Լ� ����
void addition(int* A, int* B, int* C)
{
	printf("[2���� �迭�� ��]\n");
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			*(C + i * SIZE + j) = *(A + i * SIZE + j) + *(B + i * SIZE + j);
			printf("%d ", *(C + i * SIZE + j));
		}
		printf("\n");
	}
}

// 2���� �迭�� �� ��� �Լ� ����
void multiply(int* A, int* B, int* C)
{
	printf("\n[2���� �迭�� ��]\n");
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			for (int k = 0; k < SIZE; k++) {
				if (k == 0) {
					*(C + i * SIZE + j) = 0; // C �迭�� �� �ʱ�ȭ
				}
				*(C + i * SIZE + j) += *(A + i * SIZE + k) * *(B + k * SIZE + j);
			}
			printf("%d ", *(C + i * SIZE + j));
		}
		printf("%\n");
	}
}