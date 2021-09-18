#include <stdio.h>

void AddNumber(int a, int b); // 반환값이 없는 함수 선언

int main(void) {
	int num1 = 1; // num1 변수 선언 및 1로 초기화
	int num2 = 2; // num2 변수 선언 및 2로 초기화

	AddNumber(num1, num2); // 함수 호출

	return 0;
}

void AddNumber(int a, int b) // 반환값이 없는 함수 정의
{
	int c; // c 변수 선언
	c = a + b; // a+b를 계산하여 c에 저장
	printf("%d\n", c); // a+b 값을 출력
}

