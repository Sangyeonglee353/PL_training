// income, 실습문제 1-2 | 소득세 계산하기
#include <stdio.h>
#define Tax1 0.08 // 세율 1 정의
#define Tax2 0.10 // 세율 2 정의

double get_tax(int income); // 소득세 계산 함수 선언

int main(void) {
	int income;

	printf("소득을 입력하세요(천원): ");
	scanf("%d", &income);

	printf("소득세는 %.f만원입니다.\n", get_tax(income));

	return 0;
}

double get_tax(int income) // 소득세 계산 함수 정의
{
	if (income/10 <= 1000) { // 1,000만원 이하인 경우
		return (income/10) * Tax1;
	}
	else { // 1,000만원 초과인 경우
		return 1000 * Tax1 + (income/10 - 1000) * Tax2;
	}
}