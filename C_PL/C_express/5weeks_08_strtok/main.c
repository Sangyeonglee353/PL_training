// [���� 7] ���ڿ� ��ū �и�, strtok �Լ��� ��� ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char s[] = "Man is immortal, because he has a soul";
char seps[] = " ,\t\n";
char* token;

int main(void)
{
	// ���ڿ��� �����ϰ� ���� ��ū�� ��´�.
	token = strtok(s, seps);
	while (token != NULL)
	{
		// ���ڿ� s�� ��ū�� �ִ� ���� �ݺ��Ѵ�.
		printf("��ū: %s\n", token);
		// ���� ��ū�� ��´�.
		token = strtok(NULL, seps);
	}
}