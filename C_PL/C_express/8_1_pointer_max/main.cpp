// [실습문제 8-1]: pointer_max, 포인터로 배열의 가장 큰 값 출력하기
#include<stdio.h>

void set_max_ptr(int m[], int size, int**pmax); // 최대값 찾기 함수 선언

int main(void)
{
	int m[6] = { 5, 6, 1, 3, 7, 9 }; // 배열 선언 및 초기화
	int* pmax; // 배열 m의 원소 중에서 가장 큰 값을 pmax가 가리키게 하자.

	set_max_ptr(m, 6, &pmax);

	printf("배열 m의 원소 중 가장 큰 값은 %d 이다.\n", *pmax);
	
	return 0;
}

void set_max_ptr(int m[], int size, int** pmax) // 최대값 찾기 함수 정의
{
	*pmax = &m[0]; // 배열의 첫 원소로 초기화
	for (int i = 1; i < size; i++) { // 배열에서 최대값으로 주소 변경
		if (*pmax < &m[i])
			*pmax = &m[i];
	}
}

