// [���� 1] �ҹ��ڸ� �빮�ڷ� ��ȯ
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int c;

	while ((c = getchar()) != EOF) {
		if (islower(c)) // �ҹ������� �˻�
			c = toupper(c); // �빮�ڷ� ��ȯ
		putchar(c);
	}
	return 0;
}