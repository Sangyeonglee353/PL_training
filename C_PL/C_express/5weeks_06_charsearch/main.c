// [���� 5] ���� �˻�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "language";
	char c = 'g';
	char* p;
	int loc;

	p = strchr(s, c); // s�ȿ��� ���� c�� ã�´�.
	loc = (int)(p - s);
	if (p != NULL)
		printf("ù��° %c�� %d���� �߰ߵǾ���\n\n", c, loc);
	else
		printf("%c�� �߰ߵ��� �ʾ���\n\n", c);
	return 0;
}