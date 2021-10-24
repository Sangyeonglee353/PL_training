// [�ǽ����� 8-2]: sort_string, ���ڿ� �����ϱ�
#include <stdio.h>
#include <string.h>

void sort_string(char* s[], int size); // ���ڿ� �迭 ���� �Լ� ����
void print_string(char* s[], int size); // ���ڿ� �迭 ��� �Լ� ����

int main(void) {
	
	char* s[] = { "mycopy", "src", "dst" };
	int size;

	size = sizeof(s) / sizeof(s[0]);

	printf("=====�Լ� ���� ��=====\n");
	print_string(s, size);

	sort_string(s, size); // ���ڿ� �������� ����

	printf("=====�Լ� ���� ��=====\n");
	print_string(s, size);

	return 0;
}

// ���ڿ� ���� �Լ� ����
void sort_string(char* s[], int size)
{
	char* temp_str;

	// ���� ������ �̿��� �������� ����
	for (int step = 0; step < size-1; step++){
		for (int i = 0; i < size - 1 - step; i++) {
			// strcmp(), 0: ����, 1: �ռ��� ū ���, -1: �޼��� ū ���
			if (strcmp(s[i], s[i + 1]) > 0) {
				temp_str = s[i];
				s[i] = s[i + 1]; // ���ڿ��� �ƴ� ���ڿ� �迭�̹Ƿ�
				                 // strcpy(s[i],s[i+1]); ��� '=' ��ȣ �����ڸ� ����Ѵ�.
				s[i+1] = temp_str;
			}
		}
	}
}

// ���ڿ� ��� �Լ� ����
void print_string(char* s[], int size)
{
	for (int i = 0; i < size; i++) {
		printf("%s ", s[i]);
	}
	printf("\n\n");
}