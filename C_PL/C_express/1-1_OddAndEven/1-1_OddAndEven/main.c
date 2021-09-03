// Odd and Even, 실습문제 1-1 | 홀짝 구분하기
#include <stdio.h>
#define SIZE 10 // 배열의 길이 정의

void Odd(int arr[], int n);   // 홀수출력 함수 선언
void Even(int  arr[], int n); // 짝수출력 함수 선언

int main(void) {
	int arr[SIZE];

	// 배열 값 입력부
	for (int i = 0; i < SIZE; i++){
		scanf("%d", &arr[i]);
	}
	
	Odd(arr, SIZE);
	printf("\n");
	Even(arr, SIZE);

	return 0;
}

void Odd(int arr[], int n) // 홀수출력 함수 정의
{
	printf("홀수출력: ");
	for (int i = 0; i < n; i++){
		if (arr[i] % 2 != 0){
			printf("%d,", arr[i]);
		}
	}
}

void Even(int arr[], int n) // 짝수출력 함수 정의
{
	printf("짝수출력: ");
	for (int i = 0; i < n; i++){
		if (arr[i] % 2 == 0){
			printf("%d,", arr[i]);
		}
	}
}