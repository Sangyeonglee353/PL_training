// [�ǽ����� 10-2] GET_BIT, ������ ��Ʈ �̵��Ͽ� ����ϱ�
#include <stdio.h>
#include <stdbool.h>
#define GET_BIT(n, pos) (((n) >> (pos)) & 0x01) // ���� n���� pos��° ��Ʈ�� ���� ��ȯ

void Display_bit(int n); // 32��Ʈ ��� �Լ� ����
int input_num_shift();   // ����Ʈ �Ÿ� �Է� �Լ� ����
int shift_num(int num, int direction, int size); // ����Ʈ ��� �Լ� ����

int main(void)
{
	int num;        // �Է¹��� ���� ����
	int direction;  // ����Ʈ ���� ����
	int num_shift;  // ����Ʈ �Ÿ� ����
	int num_result; // ����Ʈ ��� ���� ����

	bool control = true;

	// #1. �ʱⰪ �Է¹޾� ���
	printf("�������� �Է��ϼ���: ");
	scanf("%d", &num);
	printf("�̵� ��(������): ");
	Display_bit(num);

	// #2. ����Ʈ �Է�
	while (control) {
		printf("���� �̵��� 0��, ������ �̵��� 1�� �Է��ϼ���: ");
		scanf("%d", &direction);

		switch (direction) {
		case 0: // ���� �̵�
			num_shift = input_num_shift();
			num_result = shift_num(num, direction, num_shift);
			printf("�̵� ��(������): ");
			Display_bit(num_result);
			control = false;
			break;
		case 1: // ������ �̵�
			num_shift = input_num_shift();
			num_result = shift_num(num, direction, num_shift);
			printf("�̵� ��(������): ");
			Display_bit(num_result);
			control = false;
			break;
		default:
			printf("���� �߸� �Է��ϼ̽��ϴ�. \n");
		}
	}
	
	return 0;
}

// 32��Ʈ ��� �Լ� ����
void Display_bit(int n) 
{
	int i;
	for (i = 31; i >= 0; i--)
	{
		if (i % 8 == 0) { // 8��Ʈ���� ����
			if (GET_BIT(n, i)) {
				printf("1 ");
			}
			else {
				printf("0 ");
			}
		}
		else {
			if (GET_BIT(n, i)) {
				printf("1");
			}
			else {
				printf("0");
			}
		}
	}
	printf("\n");
}

// ����Ʈ �Ÿ� �Է� �Լ� ����
int input_num_shift()
{
	int numShift;
	printf("�̵���ų ����Ʈ �Ÿ�: ");
	scanf("%d", &numShift);

	return numShift;
}

// ����Ʈ ��� �Լ� ����
int shift_num(int num, int direction, int size)
{
	int result;
	if (direction == 0) {
		result = num << size;
	}
	else if (direction == 1) {
		result = num >> size;
	}
	
	return result;
}
