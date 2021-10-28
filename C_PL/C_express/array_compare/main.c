#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void array_print(int a[], int size); // 배열 출력 함수
int array_equal(int a[], int b[], int size); // 배열 비교 함수

int main(void)
{
	srand((unsigned)time(NULL));

	int a[SIZE] = { 1, 1, 0 };
	int b[SIZE] = { 1, 1, 1 };
	int result;
	// size = sizeof(a) / sizeof(a[0]); // 배열의 개수 계산

	array_print(a, SIZE);
	array_print(b, SIZE);
	printf("\n");

	result = array_equal(a, b, SIZE);

	if (result == 0)
	{
		printf("2개의 배열은 다름\n");
	}
	else
	{
		printf("2개의 배열은 같음\n");
	}
	return 0;

}

void array_print(int a[], int size)
{
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

int array_equal(int a[], int b[], int size)
{
	int i;

	for (i = 0; i < SIZE; i++)
	{
		if (a[i] != b[i])
		{
			return 0;
			break;
		}
		else
		{
			continue;
		}
		return 1;
	}
}