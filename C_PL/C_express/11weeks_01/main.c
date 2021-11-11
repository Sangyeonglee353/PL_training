// [예제 1]
#include<stdio.h>
#pragma warning(disable:4996) // 지정 에러리스트 무시하기

int main(void)
{
	int a, b;

	printf("6개의 숫자로 이루어진 정수를 입력하시오:");
	scanf("%3d%3d", &a, &b);
	printf("입력된 정수는 %d, %d\n", a, b);

	return 0;
}