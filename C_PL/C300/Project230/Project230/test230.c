// �޸𸮸� 1MB �Ҵ��ϰ� �����ϱ�(malloc, free)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>

void main(void)
{
	char* pbuf;

	pbuf = malloc(100 * 10000);

	if (pbuf)
	{
		memset(pbuf, 0, 100 * 10000);
		strcpy(&pbuf[0], "����� ��õ�� ��");
		puts(&pbuf[0]);
		free(pbuf);
	}
}