// 예제: 배열의 원소를 역순으로 출력
#include <stdio.h>

//void print_reverse(int a[], int n);
//
//int main(void) {
//	int a[] = { 10, 20, 30, 40, 50 };
//	print_reverse(a, 5);
//	return 0;
//}
//
//void print_reverse(int a[], int n)
//{
//	int* p = a + n - 1;       // 마지막 노드(위치)를 가리킨다.
//	while (p >= a)           // 첫번재 노드(위치)까지 반복
//		printf("%d\n", *p--); // p가 가리키는 위치를 출력하고 감소
//}

void print_reverse(int *a, int n);

int main(void) {
	int a[] = { 10, 20, 30, 40, 50 };
	print_reverse(a, 5);
	return 0;
}

void print_reverse(int *a, int n)
{
	int* p = a + n - 1;       // 마지막 노드(위치)를 가리킨다.
	while (p >= a)           // 첫번재 노드(위치)까지 반복
		printf("%d\n", *p--); // p가 가리키는 위치를 출력하고 감소
}