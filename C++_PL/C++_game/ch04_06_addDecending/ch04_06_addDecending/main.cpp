#include <cstdio>
#include <cstring>
#include <cstdlib>

// 프로그램 4.4의 3~8행의 printArray()함수 추가
void printArray(const int a[], int len, const char msg[] ="Array")
{
	printf("%s: ", msg);
	for (int i = 0; i < len; i++)
		printf("%3d", a[i]);
	printf("\n");
}

void reverseArray(const int a[], int b[], int len) {
	for (int i = 0; i < len; i++)
		b[len - i - 1] = a[i];
}

void reverseStirng(const char src[], char dst[]) {
	int len = strlen(src);
	for (int i = 0; i < len; i++)
		dst[len - i - 1] = src[i];
	dst[len] = '\0';
}

void addDescending(int  a[], int len, int val) {
	if (val > a[len - 1]) {
		a[len - 1] = val;
		for (int i = len - 1; i > 0; i--) {
			if (val < a[i - 1]) return;
			a[i] = a[i - 1];
			a[i - 1] = val;
		}
	}
}

void main()
{
	int score[5] = { 0, 0,0,0,0};
	for (int i = 0; i < 8; i++) {
		int newScore = rand() % 100;
		addDescending(score, 5, newScore);
		printf("[%2d] ", newScore);
		printArray(score, 5, "순위");
	}
}