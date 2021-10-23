// 예제 1: 포인터의 포인터
#include <stdio.h>

int main()
{
	int a;
	int* p;
	int** q;

	a = 58;
	p = &a;
	q = &p;

	printf("a의 주소값: %p\n", &a);
	printf("p의 주소값: %p\n", &p);
	printf("q의 값: %p\n\n", q);
	printf("q의 주소값: %p\n\n", &q);
	printf("이중포인터 변수 q의 메모리 사이즈: %d 바이트\n\n", sizeof(q));
	printf("%d \n", a);
	printf("%d \n", *p);
	printf("%d \n", **q);

	return 0;
}