// getchar()의 사용
#include <stdio.h>
int main(void)
{
	int ch; // char형도 가능
	while ((ch = getchar()) != EOF) // EOF: End Of File | Ctrl + Z
		putchar(ch);

	return 0;
}