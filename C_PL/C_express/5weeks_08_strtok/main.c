// [예제 7] 문자열 토큰 분리, strtok 함수의 사용 예
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char s[] = "Man is immortal, because he has a soul";
char seps[] = " ,\t\n";
char* token;

int main(void)
{
	// 문자열을 전달하고 다음 토큰을 얻는다.
	token = strtok(s, seps);
	while (token != NULL)
	{
		// 문자열 s에 토큰이 있는 동안 반복한다.
		printf("토큰: %s\n", token);
		// 다음 토큰을 얻는다.
		token = strtok(NULL, seps);
	}
}