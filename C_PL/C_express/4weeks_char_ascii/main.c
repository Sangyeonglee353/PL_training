// 아스키 코드 출력
#include <stdio.h>
int main(void)
{
	unsigned char code;

	for (code = 32; code < 128; code++)
	{
		printf("아스키 코드 %d은 %c입니다.\n", code, code);
	}

	return 0;
}