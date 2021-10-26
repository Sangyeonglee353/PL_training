// 예제 8: void 포인터 2
#include <stdio.h>
#include <string.h>

void swap(char*, void*, void*); // 함수선언

int main() {
	int a = 10, b = 20;
	double da = 1.5, db = 2.5;

	printf("정수값 교환 전: a=%d, b=%d \n", a, b); // 교환 전 결과 출력
	swap("int", &a, &b); // 두 정수값을 교환
	printf("정수값 교환 후: a=%d, b=%d \n", a, b); // 교환 후 결과 출력

	printf("실수값 교환 전: da=%.1f, db=%.1f \n", da, db); // 교환 전 결과 출력
	swap("double", &da, &db); // 두 실수값 교환
	printf("실수값 교환 후: da=%.1f, db=%.1f \n", da, db); // 교환 후 결과 출력

	return 0;
}

void swap(char*type, void* vp1, void* vp2)
{
	int itemp;
	double dtemp;

	if (strcmp(type, "int") == 0) { // 교환할 자료형이 "int" 형이면
		itemp = *(int*)vp1;
		*(int*)vp1 = *(int*)vp2; // vp1, vp2를 int*로 형변환
		*(int*)vp2 = itemp;
	}

	if (strcmp(type, "double") == 0) { // 교환할 자료형이 "double" 형이면
		dtemp = *(double*)vp1;
		*(double*)vp1 = *(double*)vp2; // vp1, vp2를 double*로 형변환
		*(double*)vp2 = dtemp;
	}
}
