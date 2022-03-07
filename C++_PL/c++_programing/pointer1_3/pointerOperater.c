// 포인터의 증감 연산
#include <stdio.h>

int test7_main(void)
{
	int i = 10;
	int* pi = &i;

	printf("i = %d,  pi = %p\n", i, pi);
	(*pi)++;
	printf("i = %d,  pi = %p\n", i, pi);

	printf("i = %d,  pi = %p\n", i, pi);
	*pi++;	// (*pi)++ ; // 두개는 차이가 있는가? 어떻게 차이 나는가?
	printf("i = %d,  pi = %p\n", i, pi);

	return 0;
}
