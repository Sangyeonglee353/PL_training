// [실습 1-1] 정수를 입력받아 홀수와 짝수 출력하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void odd_display(int*);  // 홀수 출력 함수 정의
void even_display(int*); // 짝수 출력 함수 정의

int main(void) {

	int input[10]; // 크기가 10인 배열 정의

	for (int i = 0; i < 10; i++) {
		scanf("%d", &input[i]);
	}

	odd_display(input);
	even_display(input);

	return 0;
}

void odd_display(int* a) // 홀수 출력 함수 선언
{
	printf("홀수출력: ");
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 != 0) {
			printf("%d, ", a[i]);
		}
	}
	printf("\n");

}

void even_display(int* a) // 짝수 출력 함수 선언
{
	printf("짝수출력: ");
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 == 0) {
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
