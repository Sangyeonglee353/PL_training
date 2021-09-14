// 포인터와 배열의 사용법 비교
// 포인터 사용의 장점: 인덱스 표기법보다 빠르다.

#include <stdio.h>
#define SIZE 5

int get_sum1(int a[], int n);
int get_sum2(int* a, int n);

int main(void) {
	int a[] = { 1, 2, 3, 4, 5 };

	printf("일반 배열의 값: %d\n", get_sum1(a, SIZE));
	printf("포인터 배열의 값: %d", get_sum2(a, SIZE));

	return 0;
}

int get_sum1(int a[], int n)
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
		sum += a[i];

	return sum;
}

int get_sum2(int* a, int n)
{	
	int i;
	int* p;
	int sum = 0;
	
	p = a;
	for (i = 0; i < n; i++)
		sum += *p++;
	return sum;
}