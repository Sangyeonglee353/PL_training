// [�ǽ����� 4-1] RemoveBlank, ���ڿ��� ���� �����ϱ�
#include <stdio.h>

void removeBlank(char* str); // ������ ������ ���ڿ� ��� �Լ� ����

int main(void) {
	char str[100]; // ���ڿ��� �Է� �޾Ƽ� ������ �迭 ����
	gets(str);     // char[] Ÿ���� ���ڿ��� stdin(Ű����)�� ���ڿ� �Է� ����.
	removeBlank(str); // ���� ������ ���ڿ� ���
	return 0;
}

void removeBlank(char* str) // ������ ������ ���ڿ� ��� �Լ� ����
{
	while(*str != '\0'){ // ���ڿ��� ���� ��Ÿ���� NULL���� ���ö����� �ݺ�
		if (*str != ' ') {      // ������ �ƴ� ���
			printf("%c", *str); // �ش� ���� ���
		}
		*str++; // ������ �ּ� ����
	}
	printf("\n"); // �ٹٲ�
}