// [���� 3] strcpy�� strcat
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main(void)
{
	char string[80];

	strcpy(string, "Hello world from "); // �����ϱ�
	strcat(string, "strcpy"); // ���ڿ� ����
	strcat(string, "and "); // ���ڿ� ����
	strcat(string, "strcat!"); // ���ڿ� ����
	printf("string = %s\n\n", string);
	return 0;
}