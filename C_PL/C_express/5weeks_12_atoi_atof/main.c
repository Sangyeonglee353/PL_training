// [���� 11] ���ڿ� ��ġ ��ȯ ���� �Լ�, atoi, atof
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char s1[] = "100";
	char s2[] = "12.93";
	char buffer[100];
	int i;
	double d, result;

	i = atoi(s1); // str -> int
	d = atof(s2); // str -> double
	result = i + d;

	sprintf(buffer, "%f", result);
	printf("���� ����� %s�Դϴ�.\n", buffer);

	return 0;
}