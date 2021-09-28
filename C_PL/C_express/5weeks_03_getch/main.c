// [예제 2] 다양한 문자처리 라이브러리 사용해 보기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main(void)
{
	int c;

	while ((c = _getch()) != 'z') // 에코가 없고 버퍼를 사용하지 않아 문자 입력시 바로 실행
	{
		printf("----------------\n");
		printf("isdigit(%c) = %d\n", c, isdigit(c)); // 숫자인지 검사
		printf("isalpha(%c) = %d\n", c, isalpha(c)); // 알파벳인지 검사
		printf("islower(%c) = %d\n", c, islower(c)); // 소문자인지 검사
		printf("ispunct(%c) = %d\n", c, ispunct(c)); // 구두점 문자인지 검사
		printf("isxdigit(%c) = %d\n", c, isxdigit(c)); // 16진수인지 검사
		printf("isprintf(%c) = %d\n", c, isprint(c)); // 출력가능한지 검사
		printf("----------------\n");
	}

	return 0;
}