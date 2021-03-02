// 문자가 공백, 탭문자 또는 개행문자인지 검사하기(isspace)

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char* string = "This is Korea! \t\n";
	int cnt = 0;

	while (*string)
	{
		if (isspace(*string))
		{
			cnt++;
		}

		string++;
	}

	printf("공백, 탭 그리고 개행문자의 수는 %d입니다.", cnt);
}