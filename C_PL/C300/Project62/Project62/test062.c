#include <stdio.h>
#include <string.h>

// 문자열 연결하기(strcat)
void main(void)
{
	char string1[100];
	char string2[100];

	printf("첫 번째 단어를 입력하세요!\n");
	gets(string1);

	printf("두 번째 단어를 입력하세요!\n");
	gets(string2);

	strcat_s(string1, 100, string2);

	puts(string1);
}