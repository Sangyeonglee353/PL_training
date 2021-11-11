// [예제 2] 8진수, 16진수 입력
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int d, o, x;

	scanf("%d %o %x", &d, &o, &x); // 10진수, 8진수, 16진수로 입력받기
	printf("d=%d o=%d x=%d\n", d, o, x);
}