/* 예제 pointer1-4.c */

#include <stdio.h>

int test3_main(void)
{
	int a = 2008, b = 2007;
	int* pA = &a;

	(*pA)++; // a++와 같은 의미를 지닌다.

	printf("a = %d \n", a);
	printf("*pA = %d \n", *pA);

	*pA = b;
	printf("a = %d \n", a);

	*pA = *pA + *pA;
	printf("a = %d \n", a);

	pA = a;
	*pA = &a;

	return 0;
}