#include <stdio.h>

main()
{
	int x = 1;
	
	printf("x = %d\n", x++); // x=1이 출력, 그리고 1이 증가
	printf("x = %d\n", x++); // x=2가 출력, 그리고 1이 증가
	printf("x = %d\n", ++x); // 1이 먼저 증가, 그리고 x=4가 출력
	printf("x = %d\n", x--); // x=4가 출력, 그리고 1이 감소
	printf("x = %d\n", x--); // x=3이 출력, 그리고 1이 감소
	printf("x = %d\n", --x); // 1이 먼저 감소, 그리고 x=1이 출력
}