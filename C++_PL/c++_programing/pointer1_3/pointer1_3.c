/* 예제 pointer1-3.c */
#include <stdio.h>

int test_main(void)
{
	int a = 2022;
	int* pA = &a;
	printf("a의 주소(&a): %p \n", &a); // a의 주소값 출력
	printf("a의 주소(pA): %p \n", pA); // 포인터 변수 pA 값의 출력
	printf("a= %d \n", *pA); // a값 2022 출력
	printf("pA의 주소(&pA): %p \n", &pA);
	printf("a의 주소(&*pA): %p \n", &*pA);
	printf("*&*pA= %d \n", *&*pA);
	return 0;
}