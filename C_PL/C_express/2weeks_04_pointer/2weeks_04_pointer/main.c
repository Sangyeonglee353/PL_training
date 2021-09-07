#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a = 2021;
	int* pA = &a;
	printf("a의 주소(&a): %p \n", &a); // a의 주소값 출력
	printf("a의 주소(pA): %p \n", pA); // 포인터 변수 pA값의 출력
	printf("a의 값(a): %d \n", a);     // a의 값 출력
	printf("a의 값(*pA): %d \n", *pA); // 포인터를 통한 a의 값 출력
	printf("pA의 주소(&pA): %p \n", &pA); // 포인터의 주소값 출력
	printf("a의 주소(&*pA): %p \n", &*pA); // 포인터의 주소값을 이용한 a의 값 출력
	printf("a의 값(*&*pA): %d \n", *&*pA); // 포인터의 주소값을 이용한 a의 값 출력

	return 0;
}