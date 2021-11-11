// [예제 5] 문자집합으로 읽기
// 경우의 수 모두 표시하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char s[80];

	printf("문자열을 입력하시오:");
	scanf("%[^abc]", s);

	printf("입력된 문자열=%s\n", s);

	return 0;
}