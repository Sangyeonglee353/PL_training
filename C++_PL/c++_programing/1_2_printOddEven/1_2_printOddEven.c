// [�ǽ� 1-2] ������ �Է¹޾� Ȧ���� ¦�� �յڷ� ����ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// ���Ǻ�
	int input[10]; // ũ�Ⱑ 10�� �迭 ����
	int temp; // �Է¹��� ��
	int odd = 0;  // Ȧ�� ��ġ��
	int even = 9; // ¦�� ��ġ��

	// �Էº�
	for (int i = 0; i < 10; i++) {
		scanf("%d", &temp);

		if (temp % 2 != 0) { // Ȧ������ �Ǵ�
			input[odd] = temp;
			odd++;
		}
		else { // Ȧ���� �ƴ϶�� ¦��
			input[even] = temp;
			even--;
		}
	}

	// ��º�
	printf("�迭����� ���: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", input[i]);
	}

	return 0;
}