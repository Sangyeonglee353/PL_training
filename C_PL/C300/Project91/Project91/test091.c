// ���ڰ� ���ĺ� �Ǵ� �������� �˻��ϱ�(isalnum)

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char* string = "Cat 1 Car 2 Cow 3....";
	char buffer[100] = { 0, };
	int cnt = 0;

	while (*string)
	{
		if (isalnum(*string))
		{
			buffer[cnt++] = *string;
		}

		string++;
	}

	puts(buffer);
}