// [�ǽ����� 8-1]: pointer_max, �����ͷ� �迭�� ���� ū �� ����ϱ�
#include<stdio.h>

void set_max_ptr(int m[], int size, int**pmax); // �ִ밪 ã�� �Լ� ����

int main(void)
{
	int m[6] = { 5, 6, 1, 3, 7, 9 }; // �迭 ���� �� �ʱ�ȭ
	int* pmax; // �迭 m�� ���� �߿��� ���� ū ���� pmax�� ����Ű�� ����.

	set_max_ptr(m, 6, &pmax);

	printf("�迭 m�� ���� �� ���� ū ���� %d �̴�.\n", *pmax);
	
	return 0;
}

void set_max_ptr(int m[], int size, int** pmax) // �ִ밪 ã�� �Լ� ����
{
	*pmax = &m[0]; // �迭�� ù ���ҷ� �ʱ�ȭ
	for (int i = 1; i < size; i++) { // �迭���� �ִ밪���� �ּ� ����
		if (*pmax < &m[i])
			*pmax = &m[i];
	}
}

