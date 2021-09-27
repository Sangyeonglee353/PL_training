// [실습문제 4-2] SumOfNum, 문자열에서 숫자만 더하기
#include <stdio.h>
#define SIZE 100 // 문자열 크기 SIZE를 100으로 정의

void sumOfNum(char* str); // 문자열 중 숫자의 합계 계산 함수 선언

int main(void) {
	char str[SIZE]; // 문자열을 저장할 배열 선언
	gets(str);      // 문자열 입력 받기
	sumOfNum(str);  // 문자열 중 숫자의 합계 계산
	return 0;
}

void sumOfNum(char* str) // 문자열 중 숫자의 합계 계산 함수 정의
{
	int total = 0; // 총합을 저장할 변수 total을 선언하고 0으로 초기화
	while (*str != '\0') { // 문자열의 끝까지 반복문 실행
		if (*str >= '0' && *str <= '9') { // 문자가 0~9인 경우
			total += *str-'0'; // 해당 문자의 합 누적
		}
		*str++;
	}
	printf("숫자의 합: %d\n", total);
}