// ���ڿ��� NULL�� ä���(strset)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main(void)
{
	char buff[] = "��ȣ�� Korea�Դϴ�.";

	puts(buff);
	_strset(buff, 0);
	printf("[%s] \n", buff);
}