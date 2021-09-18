#include <stdio.h>
#define SIZE 5 // 배열의 크기 정의
void ArraySum(int *arr, int *arr_size); // 반환값이 없는 배열 합계 함수 선언

int main(void) {

	int arr[] = { 1, 2, 3, 4, 5 }; // 배열 선언 및 초기화
	int arr_size = sizeof(arr) / sizeof(int); // 배열의 크기를 구해 초기화

	ArraySum(arr, &arr_size); 

	return 0;
}

void ArraySum(int *arr, int *arr_size) // 반환값이 없는 배열 합계 함수 정의
{
	int total = 0;

	for (int i = 0; i < SIZE; i++) { // 반복문으로 배열의 합계 구하기
		total += (*arr++);
	}

	printf("배열의 합계: %d\n", total); // 배열의 합계 출력
	printf("배열의 크기: %d\n", *arr_size); // 배열의 크기 출력
}