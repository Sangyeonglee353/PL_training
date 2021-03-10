// 매크로 컴파일 에러 출력하기

#include <stdio.h>

#if !define COUNT
#error "COUNT MACRO is not defined!"
#endif

void main(void)
{
	printf("COUNT : %d \n", COUNT);
}