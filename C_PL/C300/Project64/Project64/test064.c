#include <stdio.h>
#include<string.h>

// ���ڿ� �˻��ϱ�(strstr)

#define SKY "sky"

void main(void)
{
	char string[100];
	char* ret;

	puts("���ڿ��� �Է��� �� EnterŰ�� ġ����!");
	puts("���ڿ� �߿� sky�� ���ԵǾ� ������,���α׷��� ����˴ϴ�.");

	do
	{
		gets(string);

		ret = strstr(string, SKY);

		if (ret == NULL)
		{
			puts("���ڿ� �߿� sky�� �����ϴ�.");
		}
		else
		{
			printf("%d ��ġ���� sky ���ڿ��� ã�ҽ��ϴ�.", ret - string);
			break;
		}
	} while (1);
}