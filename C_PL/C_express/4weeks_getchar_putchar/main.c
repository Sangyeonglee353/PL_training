// getchar()�� ���
#include <stdio.h>
int main(void)
{
	int ch; // char���� ����
	while ((ch = getchar()) != EOF) // EOF: End Of File | Ctrl + Z
		putchar(ch);

	return 0;
}