// 비트 쉬프트 연산을 사용하여 나눗셈 구현하기(>>)

#include <stdio.h>

void main(void)
{
	char value = 4;

	value = value >> 1; // value = value / 2;

	printf("value : %d \n", value);
}