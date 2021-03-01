#include <stdio.h>

void print_x(int x);
void print_gx(void);

int x = 20;

main()
{
	int  x = 5;
	printf("x = %d \n", x); // 5가 출력(지역 변수 x가 사용됨)

	print_x(10);
	print_gx();
}

void print_x(int x)
{
	printf("x = %d \n", x); // 10이 출력(지역 변수 x가 사용됨)
}

void print_gx(void)
{
	printf("x = %d \n", x); // 20이 출력(전역 변수 x가 사용됨)
}