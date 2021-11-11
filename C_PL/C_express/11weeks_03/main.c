// [예제 3] 형식지정자 공백문자
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	char a, b;

	printf("문자를 입력하시오: ");

	//scanf("%c%c", &a, &b);
	scanf("%c %c", &a, &b);

	printf("%c %c \n", a, b);

	return 0;
}