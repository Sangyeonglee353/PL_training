// 최소 최대값 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void MaxMin(int* a, int** max, int** min);

int main(void) {
	int* max, * min;
	int a[5];
	int i;
	printf("5개의 정수를 입력하세요 : ");
	
	for (i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}

	MaxMin(a, &max, &min);

	printf("최대값 = %d, 최소값 = %d", *max, *min);

	return 0;
}

void MaxMin(int* a, int** max, int** min)
{
	int i = 0;

	*max = &a[i];
	*min = &a[i];

	for (i = 1; i < 5; i++) {
		if (a[i] > **max)
			*max = &a[i];
		else if (a[i] < **min)
			*min = &a[i];
		else
			break;
	}
}