#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define arr_size 42
#define count_size 10
int main(void)
{
	int i, number; // �ݺ������� �Է°�
	int count=0; // ���� ī��Ʈ
	int arr[arr_size]; // ������ �� �迭
	
	// ī��Ʈ�� �迭�� 0���� �ʱ�ȭ
	for (i = 0; i < arr_size; i++)
	{
		arr[i] = 0;
	}

	// �� ������ �� ī��Ʈ
	for (i = 0; i < count_size; i++)
	{
		scanf("%d", &number);
		arr[number % 42] += 1;
	}

	// �� ���� �ٸ� ������ ���
	for(i = 0; i< arr_size; i++)
	{
		if (arr[i] >= 1)
		{
			count++;
		}
	}

	printf("���� �ٸ� ������: %d\n", count);
	return 0;
}