// 1���� �迭�� ������ ����ϱ�
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void main(void)
{
	char one[] = "Korea";
	char* pone;

	pone = one;

	puts(one); // "Korea"
	puts(pone); // "Korea"

	strcpy(pone, "Japan");

	puts(one); // "Japan"
	puts(pone); // "Japan"
}