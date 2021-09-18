#include <stdio.h>
#define SIZE 4

void MatrixPrint(int *arr);

int main(void) {
	int arr[SIZE][SIZE] = { {11, 12, 13, 14},
							{15, 16, 17, 18},
							{19, 20, 21, 22},
							{23, 24, 25, 26} };

	MatrixPrint(arr);

	return 0;
}

void MatrixPrint(int *arr)
{
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			printf("%d ", *(arr + i * SIZE + j));
		}
		printf("\n");
	}
}