// 매크로 상수의 선언을 취소하기

#include <stdio.h>

#define COUNT 100

#if defined COUNT
#undef COUNT
#define COUNT 99
#else
#define COUNT 98
#endif

void main(void)
{
	printf("COUNT : %d \n", COUNT);
}