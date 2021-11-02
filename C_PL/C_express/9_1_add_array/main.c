// [�ǽ����� 9-1] add_array, �迭�����͸� �̿��Ͽ� ������ �迭 ���Ұ� ������Ű��
#include <stdio.h>
#define COL_SIZE 5 // 2���� �迭�� �� ����
#define NUMBER 5 // ������ų ���� ũ��

void add_array(int(*ptr)[COL_SIZE], int ROW_SIZE); // �迭 ��� ���� �Լ� ����
void print_array(int(*ptr)[COL_SIZE], int ROW_SIZE); // �迭 ��� �Լ� ����

int main(void) {
	int ary[][COL_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // 2���� �迭 ���� �� �ʱ�ȭ

	int ROW_SIZE = sizeof(ary) / sizeof(int) / COL_SIZE; // 2���� �迭�� �� ����

	// �Լ����� �� ���
	printf("===�Լ����� ��===\n");
	print_array(ary, ROW_SIZE);

	// �Լ�����
	add_array(ary, ROW_SIZE);

	// �Լ����� �� ���
	printf("===�Լ����� ��===\n");
	print_array(ary, ROW_SIZE);

	return 0;
}

// �迭 ��� ���� �Լ� ����
void add_array(int(*ptr)[COL_SIZE], int ROW_SIZE)
{
	for (int i = 0; i < ROW_SIZE; i++) {
		for (int j = 0; j < COL_SIZE; j++) {
			ptr[i][j] += NUMBER;
		}
	}
}

// �迭 ��� �Լ� ����
void print_array(int(*ptr)[COL_SIZE], int ROW_SIZE)
{
	for (int i = 0; i < ROW_SIZE; i++) {
		for (int j = 0; j < COL_SIZE; j++) {
			printf("%2d ", ptr[i][j]);
		}
		printf("\n");
	}
}
