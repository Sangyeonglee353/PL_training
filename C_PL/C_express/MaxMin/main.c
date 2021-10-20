// [실습 문제 2-2] MaxMin, 최대값과 최소값 구하기
#include <stdio.h>
#define SIZE 5 // 배열의 크기 정의

void MaxMin(int* arr, int** Max, int** Min); // 최대값과 최소값을 구하는 함수 선언

int main(void) {
	int arr[SIZE] = { 0, }; // 배열 선언 및 초기화
	int* Max = NULL; // 최대값 포인터 선언
	int* Min = NULL; // 최소값 포인터 선언

	for (int num = 0; num < SIZE; num++) { // 정수 입력 받기
		scanf("%d", &arr[num]);
	}

	MaxMin(arr, &Max, &Min); // 포인터의 주소 전달
	printf("최대값: %d, 최소값: %d", *Max, *Min); // 간접 참조연산자로 포인터의 값 출력

	return 0;
}

// 최대값과 최소값을 구하는 함수 정의
void MaxMin(int* arr, int** Max, int** Min)
{
	*Max = &arr[0];
	*Min = &arr[0];

	for (int i = 0; i < SIZE; i++) { // 최대값 주소 저장
		if (**Max < arr[i]) {
			*Max = &arr[i];
		}
	}

	for (int i = 0; i < SIZE; i++) { // 최소값 주소 저장
		if (**Min > arr[i]) {
			*Min = &arr[i];
		}
	}
}
