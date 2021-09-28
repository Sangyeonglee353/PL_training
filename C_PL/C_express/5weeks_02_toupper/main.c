// [예제 1] 소문자를 대문자로 변환
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int c;

	while ((c = getchar()) != EOF) {
		if (islower(c)) // 소문자인지 검사
			c = toupper(c); // 대문자로 반환
		putchar(c);
	}
	return 0;
}