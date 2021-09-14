// 예제: swap() 함수 #1
#include <stdio.h>

//void swap(int x, int y); // 값에 의한 호출: 함수 호출시 값만 복사
// 
//int main(void)
//{
//	int a = 100, b = 200;
//	printf("[swap() 이전]\n");
//	printf("a=%d b=%d\n\n", a, b);
//	swap(a, b);
//	printf("[swap() 이후]\n");
//	printf("a=%d b=%d\n\n", a, b);
//	return 0;
//}
//
//void swap(int x, int y)
//{
//	int tmp;
//
//	printf("[swap() 내부]\n");
//	printf("x=%d y=%d\n\n", x, y);
//	tmp = x;
//	x = y;
//	y = tmp;
//	printf("[swap() 내부 이후]\n");
//	printf("x=%d y=%d\n\n", x, y);
//}

void swap(int* px, int* py); // 참조(주소)에 의한 호출: 함수 호출시 주소가 복사

int main(void)
{
	int a = 100, b = 200;
	printf("[swap() 이전]\n");
	printf("a=%d b=%d\n\n", a, b);
	swap(&a, &b); // 배열은 포인터의 상수이므로 & 주소값 연산자를 안붙여도 되지만,
	              // 일반 변수의 경우 주소값 연산자를 붙여야 한다.
	printf("[swap() 이후]\n");
	printf("a=%d b=%d\n\n", a, b);
	return 0;
}

void swap(int* px, int* py)
{
	int tmp;

	printf("[swap() 내부]\n");
	printf("*px=%d *py=%d\n\n", *px, *py);
	tmp = *px;
	*px = *py;
	*py = tmp;
	printf("[swap() 내부 이후]\n");
	printf("*px=%d *py=%d\n\n", *px, *py);
}