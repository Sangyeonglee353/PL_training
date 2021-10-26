// 함수 포인터 예제 1
#include <stdio.h>

int add(int, int);
int sub(int, int);

int main(void) {
	int result;
	int (*pf)(int, int); // 함수 포인터 정의

	pf = add;
	result = pf(10, 20);
	printf("10+20은 %d\n", result);

	pf = sub;
	result = pf(10, 20);
	printf("10-20은 %d\n", result);

	return 0;
}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a-b;
}
