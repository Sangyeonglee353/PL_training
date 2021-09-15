// 포인터와 배열
// 포인터는 첫번째 주소만 복사하므로 효율적
// 배열은 모든 값 복사로 비효율적

//#include <stdio.h>
//#define SIZE 3
//void sub(int b[], int n);
//
//int main(void) {
//	int a[SIZE] = { 1, 2, 3 };
//	
//	printf("%d %d %d\n", a[0], a[1], a[2]);
//	sub(a, SIZE); // 배열은 포인터의 상수와 같으므로 참조에 의한 호출처럼 원본 값이 변경된다.
//	              // 그러나 일반 변수의 경우 값에 의한 호출로 원본 값에는 영향을 끼치지 않는다.
//	printf("%d %d %d\n", a[0], a[1], a[2]);
//	return 0;
//}
//
//void sub(int b[], int n)
//{
//	b[0] = 4;
//	b[1] = 5;
//	b[2] = 6;
//}

#include <stdio.h>
#define SIZE 3
void sub(int *b, int n);

int main(void) {
	int a[SIZE] = { 1, 2, 3 };

	printf("%d %d %d\n", a[0], a[1], a[2]);
	sub(a, SIZE); // 배열은 포인터의 상수와 같으므로 참조에 의한 호출처럼 원본 값이 변경된다.
				  // 그러나 일반 변수의 경우 값에 의한 호출로 원본 값에는 영향을 끼치지 않는다.
	printf("%d %d %d\n", a[0], a[1], a[2]);
	return 0;
}

void sub(int *b, int n)
{
	b[0] = 4;
	b[1] = 5;
	b[2] = 6;
}