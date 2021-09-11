// [�ǽ� ���� 2-1] NumberFrequency, �ִ� �󵵼� ���ϱ� 
#include <stdio.h>
#define TIMES 20 // ���� �Է� Ƚ�� ����

void NumberFrequency(int* arr, int size); // �ִ� �󵵼� ��� �Լ� ����

int main(void) {

	int arr[10] = { 0, }; // �󵵼� ���� �迭
	int cnt = 1; // ���� �Է� Ƚ�� 
	int num;     // �Է� ���� ��

	while (cnt <= TIMES) { // ���� �Է� Ƚ����ŭ �ݺ�
		scanf("%d", &num); // ���� �Է� �ޱ�
		if ((num >= 0) && (num < 10)) {
			++arr[num]; // ���ں� �� �� ����
			cnt++; // ���� �Է� Ƚ�� ����
		}
		else { // ���� ������ ��� �� ������ ���
			printf("�߸��� �Է��Դϴ�. 0~9 ������ ������ �Է����ּ���: ");
		}
	}
	// �ִ� �� ���� ���
	NumberFrequency(arr, 10);
	return 0;
}
// �ִ� �󵵼� ��� �Լ� ����
void NumberFrequency(int* arr, int size) {
	int MaxNum = 0;
	int MaxFrequency = arr[0];
	// �ִ� �� ���� �� Ƚ�� ���
	for (int i = 0; i < size; i++){ 
		if (MaxFrequency < arr[i]) {
			MaxFrequency = arr[i];
			MaxNum = i;
		}
	}
	// �ִ� �� ���� �� Ƚ�� ���
	printf("�ִ� �� ����: %d\n�ִ� �� Ƚ��: %d", MaxNum, MaxFrequency);
}
