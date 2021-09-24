// _getch(), _putch()
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int ch;
	while ((ch = _getch()) != 'q') // 버퍼를 사용하지 않음
		_putch(ch);
	return 0;
}