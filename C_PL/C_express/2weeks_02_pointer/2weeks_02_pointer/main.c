#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 10, y = 20;
	int* p;

	p = &x;
	printf("p = %d\n", p);      // 포인터의 값 출력(변수의 주소)
	printf("*p = %u\n\n", *p);  // 포인터를 통한 간접 참조 값 출력(변수의 값)

	p = &y;
	printf("p = %d\n", p);      // 포인터의 값 출력(변수의 주소)
	printf("*p = %u\n\n", *p);  // 포인터를 통한 간접 참조 값 출력(변수의 값)
	
	return 0;
}
