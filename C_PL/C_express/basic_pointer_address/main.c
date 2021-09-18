// 포인터 개념 정리

#include <stdio.h>

int main(void) {
	int num1 = 10; // 정수형 변수 num1 선언 및 초기화
	float float1 = 28.8; // 실수형 변수 float1 선언 및 초기화
	char char1 = 'K'; // 문자형 변수 char1 선언 및 초기화
	
	//printf("=== 변수들의 크기 ===\n");
	//printf("num1의 크기:%d\n", sizeof(num1)); // num1의 크기 출력
	//printf("float1의 크기:%d\n", sizeof(float1)); // float1의 크기 출력
	//printf("char1의 크기:%d\n\n", sizeof(char1)); // char1의 크기 출력

	//printf("=== 변수들의 주소 ===\n");
	//printf("num1의 주소:%u\n", &num1); // num1의 주소 출력
	//printf("float1의 주소:%u\n", &float1); // float1의 주소 출력
	//printf("char1의 주소:%u\n\n", &char1); // num2의 주소 출력

	int* p; // 정수 포인터 변수 선언
	p = &num1; // 포인터 변수 p에 num1의 주소를 저장

	printf("=== 변수들의 크기 ===\n");
	printf("num1의 크기:%d\n", sizeof(num1)); // num1의 크기 출력
	printf("p의 크기:%d\n", sizeof(p)); // p의 크기 출력
	printf("*p의 크기:%d\n\n", sizeof(*p)); // *p의 크기 출력

	printf("=== 변수들의 주소 ===\n");
	printf("num1의 주소:%u\n", &num1); // num1의 주소 출력
	printf("p의 주소:%u\n", &p); // p의 주소 출력
	printf("*p의 주소:%u\n\n", &*p); // *p의 주소 출력

	printf("=== 변수의 값 출력 ===\n");
	printf("num1의 값:%d\n", num1); // num1의 값 출력
	printf("p의 값:%d\n", p); // p의 값 출력
	printf("*p의 값:%d\n\n", *p); // *p의 값 출력

	return 0;
}