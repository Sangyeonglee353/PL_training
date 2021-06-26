#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define arr_size 42
#define count_size 10
int main(void)
{
	int i, number; // 반복변수와 입력값
	int count=0; // 숫자 카운트
	int arr[arr_size]; // 나머지 비교 배열
	
	// 카운트할 배열을 0으로 초기화
	for (i = 0; i < arr_size; i++)
	{
		arr[i] = 0;
	}

	// 각 나머지 값 카운트
	for (i = 0; i < count_size; i++)
	{
		scanf("%d", &number);
		arr[number % 42] += 1;
	}

	// 총 서로 다른 나머지 계산
	for(i = 0; i< arr_size; i++)
	{
		if (arr[i] >= 1)
		{
			count++;
		}
	}

	printf("서로 다른 나머지: %d\n", count);
	return 0;
}