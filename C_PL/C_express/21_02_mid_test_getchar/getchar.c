#include <stdio.h>
#include <conio.h>
int main(void)
{
	int ch;
	while ((ch = _getche()) != 'q')
		_putch(ch);
	return 0;
}