#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char ch;
	int in;
	double db;

	*&ch = 'A'; // 포인터 &ch가 가리키는 기억공간(1바이트)에 'A'를 저장한다.
	*&in = 100; // 포인터 &in이 가리키는 기억공간(4바이트)에 정수 100을 저장한다.
	*&db = 3.14159; // 포인터 &db가 가리키는 기억공간(8바이트)에 부동소수 3.14159를 저장한다.

	printf("변수 ch에 저장된 문자: %c \n", ch);
	printf("변수 in에 저장된 문자: %d \n", in);
	printf("변수 db에 저장된 값: %lf \n", db);

	return 0;
}