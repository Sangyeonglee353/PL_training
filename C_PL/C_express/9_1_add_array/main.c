// [실습문제 9-1] add_array, 배열포인터를 이용하여 이차원 배열 원소값 증가시키기
#include <stdio.h>
#define COL_SIZE 5 // 2차원 배열의 열 개수
#define NUMBER 5 // 증가시킬 수의 크기

void add_array(int(*ptr)[COL_SIZE], int ROW_SIZE); // 배열 요소 증가 함수 선언
void print_array(int(*ptr)[COL_SIZE], int ROW_SIZE); // 배열 출력 함수 선언

int main(void) {
	int ary[][COL_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // 2차원 배열 선언 및 초기화

	int ROW_SIZE = sizeof(ary) / sizeof(int) / COL_SIZE; // 2차원 배열의 행 개수

	// 함수수행 전 출력
	printf("===함수수행 전===\n");
	print_array(ary, ROW_SIZE);

	// 함수수행
	add_array(ary, ROW_SIZE);

	// 함수수행 후 출력
	printf("===함수수행 후===\n");
	print_array(ary, ROW_SIZE);

	return 0;
}

// 배열 요소 증가 함수 정의
void add_array(int(*ptr)[COL_SIZE], int ROW_SIZE)
{
	for (int i = 0; i < ROW_SIZE; i++) {
		for (int j = 0; j < COL_SIZE; j++) {
			ptr[i][j] += NUMBER;
		}
	}
}

// 배열 출력 함수 정의
void print_array(int(*ptr)[COL_SIZE], int ROW_SIZE)
{
	for (int i = 0; i < ROW_SIZE; i++) {
		for (int j = 0; j < COL_SIZE; j++) {
			printf("%2d ", ptr[i][j]);
		}
		printf("\n");
	}
}
