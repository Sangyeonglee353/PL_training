#include <stdio.h>

int printf(char* string);

main()
{
	print("This is a function!");
}

int print(char* string)
{
	int len = 0;

	while (*string != (char)NULL)
	{
		printf("%c", *string);
		string++; // 번지 값을 1 증가
		len++; // 문자열의 길이를 1 증가
	}

	return len;
}