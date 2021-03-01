#include <stdio.h>
#include <conio.h>

int print(char* string);

void main(void)
{
	print("This is a putch function!");
}

int print(char* string)
{
	int len = 0;

	while (*string != (char)NULL)
	{
		_putch(*string);
		string++;
		len++;
	}

	// 현재 출력되고 있는 줄을 다음 줄의 첫 번째로 이동
	_putch('\r'); // 캐리지 리턴
	_putch('\n'); // 라인 피드

	return len;
}