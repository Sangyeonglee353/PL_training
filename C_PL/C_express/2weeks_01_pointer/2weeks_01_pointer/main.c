#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i = 3000;
	int* p = &i; // 변수와 포인터 연결

	// %u: 부호가 없는 정수(십진수)로 출력
	// %d: 부호가 있는 정수(십진수)로 출력

	printf("&i = %u\n", &i); // 변수의 주소 출력
	printf("i = %d\n", i);   // 변수의 값 출력
	
	printf("p = %u\n", p);   // 포인터의 값 출력(변수의 주소)
	printf("*p = %d\n", *p); // 포인터를 통한 간접 참조 값 출력

	return 0;
}