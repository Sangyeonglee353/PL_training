// [�ǽ����� 5-1] AlphaDict, ���ڿ� ������� �����ϱ�
#include <stdio.h>
#include <string.h>
#define SIZE 100

// ���ڿ� ��� �Լ� ����
void alphaPrint(char* str1, char* str2, char* str3);
int main(void) {
	char str1[SIZE]; // ù��° ���ڿ� ���� ����
	char str2[SIZE]; // �ι�° ���ڿ� ���� ����
	char str3[SIZE]; // ������ ���ڿ� ���� ����
	int result; // ���ڿ� �񱳰� ���� ���� ����

	// ���ڿ� �Է�
	printf("1��° ���ڿ��� �Է��Ͻÿ�: ");
	gets_s(str1, sizeof(str1));
	printf("2��° ���ڿ��� �Է��Ͻÿ�: ");
	gets_s(str2, sizeof(str2));
	printf("3��° ���ڿ��� �Է��Ͻÿ�: ");
	gets_s(str3, sizeof(str3));

	// ���ڿ� �� �� ���ĵ� ���ڿ� ���
	result = strcmp(str1, str2);
	if (result >= 0) { // str1�� str2���� ũ�ų� ���� ���
		result = strcmp(str1, str3);
		if (result >= 0) { // str1�� str3���� ũ�ų� ���� ���
			result = strcmp(str2, str3);
			if (result >= 0) { // str2�� str3���� ũ�ų� ���� ���
				alphaPrint(str1, str2, str3);
			}
			else { // str2�� str3���� ���� ���
				alphaPrint(str1, str3, str2);
			}
		}
		else { // str1�� str3���� ���� ���
			alphaPrint(str3, str1, str2);
		}
	}
	else { // str1�� str2���� ���� ���
		result = strcmp(str1, str3);
		if (result >= 0) { // str1�� str3���� ũ�ų� ���� ���
			alphaPrint(str2, str1, str3);
		}
		else { // str1�� str3���� ���� ���
			result = strcmp(str2, str3);
			if (result >= 0) { // str2�� str3���� ũ�ų� ���� ���
				alphaPrint(str2, str3, str1);
			}
			else { // str2�� str3���� ���� ���
				alphaPrint(str3, str2, str1);
			}
		}
	}
	return 0;
}

// ���ڿ� ��� �Լ� ����
void alphaPrint(char* str1, char* str2, char* str3)
{
	printf("���ĵ� ���ڿ�: %s%s%s\n", str1, str2, str3);
}