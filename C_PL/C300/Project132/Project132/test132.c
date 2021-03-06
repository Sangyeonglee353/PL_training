// 함수 포인터 사용하기

#include <stdio.h>
#include <string.h>

void main(void)
{
	int (*myfunc)(const char*);

	myfunc = puts;

	puts("올챙이가 쏙 ~.~");
	myfunc("뒷다리가 쭉~.~");

	myfunc = strlen;

	printf("문자열의 길이: %d \n", strlen("aa"));
	printf("문자열의 길이: %d \n", myfunc("aa"));
}