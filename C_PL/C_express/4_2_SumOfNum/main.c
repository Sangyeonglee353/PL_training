// [�ǽ����� 4-2] SumOfNum, ���ڿ����� ���ڸ� ���ϱ�
#include <stdio.h>
#define SIZE 100 // ���ڿ� ũ�� SIZE�� 100���� ����

void sumOfNum(char* str); // ���ڿ� �� ������ �հ� ��� �Լ� ����

int main(void) {
	char str[SIZE]; // ���ڿ��� ������ �迭 ����
	gets(str);      // ���ڿ� �Է� �ޱ�
	sumOfNum(str);  // ���ڿ� �� ������ �հ� ���
	return 0;
}

void sumOfNum(char* str) // ���ڿ� �� ������ �հ� ��� �Լ� ����
{
	int total = 0; // ������ ������ ���� total�� �����ϰ� 0���� �ʱ�ȭ
	while (*str != '\0') { // ���ڿ��� ������ �ݺ��� ����
		if (*str >= '0' && *str <= '9') { // ���ڰ� 0~9�� ���
			total += *str-'0'; // �ش� ������ �� ����
		}
		*str++;
	}
	printf("������ ��: %d\n", total);
}