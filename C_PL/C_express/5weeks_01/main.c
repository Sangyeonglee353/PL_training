// [����] gets
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char name[100];
	char address[100];
	printf("�̸��� �Է��Ͻÿ�: ");
	gets(name); // �� �ܾ� �̻��� �Է¹��� ���� ����Ѵ�.
	printf("���� �����ϴ� �ּҸ� �Է��Ͻÿ�: ");
	gets(address);
	puts(name);
	puts(address);

	return 0;
}