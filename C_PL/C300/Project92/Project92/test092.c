// ���ڰ� �빮������ �˻��ϱ�(isupper)

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char* string = "This is Korea!";
	char buffer[100] = { 0, };
	int cnt = 0;

	while (*string)
	{
		if (isupper(*string))
		{
			buffer[cnt++] = *string;
		}

		string++;
	}

	puts(buffer);
}