// 문자가 소문자인지 검사하기(islower)

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char* string = "This is Korea!";
	char buffer[100] = { 0, };
	int cnt = 0;

	while (*string)
	{
		if (islower(*string))
		{
			buffer[cnt++] = *string;
		}

		string++;
	}

	puts(buffer);
}