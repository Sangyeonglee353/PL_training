// _getch(), _putch()
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int ch;
	while ((ch = _getch()) != 'q') // ���۸� ������� ����
		_putch(ch);
	return 0;
}