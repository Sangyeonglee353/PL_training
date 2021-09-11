// [실습 문제 2-3] MatrixOperator, 2차원 배열의 합과 곱 구하기
#include <stdio.h>
#define SIZE 4 // 배열의 크기 정의

void addition(int* A, int* B, int* C); // 2차원 배열의 합 계산 함수 선언
void multiply(int* A, int* B, int* C); // 2차원 배열의 곱 계산 함수 선언

int main(void) {
	int A[SIZE][SIZE] = { {1,2,3,4}, {5,6,7,8}, {3,2,1,0}, {2,3,4,5} };
	int B[SIZE][SIZE] = { {-1,-2,-3,-4}, {1,2,3,4}, {3,4,5,6}, {2,1,-1,-2} };
	int C[SIZE][SIZE] = { 0 };

	addition(*A, *B, *C);
	multiply(*A, *B, *C);

	return 0;
}

// 2차원 배열의 합 계산 함수 정의
void addition(int* A, int* B, int* C)
{
	printf("[2차원 배열의 합]\n");
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			*(C + i * SIZE + j) = *(A + i * SIZE + j) + *(B + i * SIZE + j);
			printf("%d ", *(C + i * SIZE + j));
		}
		printf("\n");
	}
}

// 2차원 배열의 곱 계산 함수 정의
void multiply(int* A, int* B, int* C)
{
	printf("\n[2차원 배열의 곱]\n");
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			for (int k = 0; k < SIZE; k++) {
				if (k == 0) {
					*(C + i * SIZE + j) = 0; // C 배열의 값 초기화
				}
				*(C + i * SIZE + j) += *(A + i * SIZE + k) * *(B + k * SIZE + j);
			}
			printf("%d ", *(C + i * SIZE + j));
		}
		printf("%\n");
	}
}