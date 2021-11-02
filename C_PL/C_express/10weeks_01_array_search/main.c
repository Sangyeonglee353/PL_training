// [예제 1] 배열에서 값의 위치 찾기
#include <stdio.h>
#define AND &&
#define OR ||
#define NOT !
#define IS ==
#define ISNOT !=

int search(int list[], int n, int key);

int main(void) {
	int m[] = { 1, 2, 3, 4, 5, 6, 7 };

	// 배열 m에서 5의 위치(m의 배열 인덱스)를 찾는 함수
	printf("%d\n", search(m, sizeof(m) / sizeof(m[0]), 5));
	return 0;
}

int search(int list[], int n, int key)
{
	int i = 0;
	while (i < n AND list[i] != key)
		i++;
	if (i IS n)
		return -1;
	else
		return i;
}
