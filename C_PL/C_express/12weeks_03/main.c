// [���� 6] ���ڿ� �˻�
#define _CRT_SECURE_NO_WANRINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char s[] = "A joy that's shared is a joy made double";
	char sub[] = "joying";
	char* p;
	int loc;
	p = strstr(s, sub);
	loc = (int)(p - s);
	if (p != NULL)
		printf("ù��° %s�� %d���� �߰ߵǾ���\n", sub, loc);
	else
		printf("%s�� �߰ߵ��� �ʾ���\n", sub);

	return 0;
}