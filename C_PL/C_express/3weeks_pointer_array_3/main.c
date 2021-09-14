// 포인터를 배열 이름처럼 사용
#include <stdio.h>

int main(void)
{
	int a[] = { 10, 20, 30, 40 };
	int* p;

	p = a; // 배열의 이름은 포인터 상수다.

	// 값 변경 전
	printf("a[0]=%d a[1]=%d a[2]=%d a[3]=%d \n", a[0], a[1], a[2], a[3]);
	printf("p[0]=%d p[1]=%d p[2]=%d p[3]=%d \n\n", p[0], p[1], p[2], p[3]);

	p[0] = 60;
	p[1] = 70;
	p[2] = 80;
	
	// 값 변경 후
	printf("a[0]=%d a[1]=%d a[2]=%d a[3]=%d \n", a[0], a[1], a[2], a[3]);
	printf("p[0]=%d p[1]=%d p[2]=%d p[3]=%d \n", p[0], p[1], p[2], p[3]);

	return 0;
}