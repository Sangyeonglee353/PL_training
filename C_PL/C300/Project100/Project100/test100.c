// 메모리 복사하기(memcpy)
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

struct tagM1
{
	int x;
	int y;
	char buffer[30];
};

void main(void)
{
	struct tagM1 x1, x2;

	x1.x = 5;
	x2.y = 10;
	strcpy(x1.buffer, "memory copy");

	memcpy(&x2, &x1, sizeof(x1));

	puts(x2.buffer);
}