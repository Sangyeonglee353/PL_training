// �����Ϳ� �迭�� ���� ��
// ������ ����� ����: �ε��� ǥ������� ������.

#include <stdio.h>
#define SIZE 5

int get_sum1(int a[], int n);
int get_sum2(int* a, int n);

int main(void) {
	int a[] = { 1, 2, 3, 4, 5 };

	printf("�Ϲ� �迭�� ��: %d\n", get_sum1(a, SIZE));
	printf("������ �迭�� ��: %d", get_sum2(a, SIZE));

	return 0;
}

int get_sum1(int a[], int n)
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
		sum += a[i];

	return sum;
}

int get_sum2(int* a, int n)
{	
	int i;
	int* p;
	int sum = 0;
	
	p = a;
	for (i = 0; i < n; i++)
		sum += *p++;
	return sum;
}