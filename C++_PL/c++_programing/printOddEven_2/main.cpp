// [실습 1-2] 정수를 입력받아 홀수와 짝수 앞뒤로 출력하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// 정의부
	int input[10]; // 크기가 10인 배열 정의
	int temp; // 입력받은 값
	int odd = 0;  // 홀수 위치값
	int even = 9; // 짝수 위치값

	// 입력부
	for (int i = 0; i < 10; i++) {
		scanf("%d", &temp);

		if (temp % 2 != 0) { // 홀수인지 판단
			input[odd] = temp;
			odd++;
		}
		else { // 홀수가 아니라면 짝수
			input[even] = temp;
			even--;
		}
	}

	// 출력부
	printf("배열요수의 출력: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", input[i]);
	}

	return 0;
}