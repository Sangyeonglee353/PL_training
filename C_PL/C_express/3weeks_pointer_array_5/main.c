// ����: �迭�� ���Ҹ� �������� ���
#include <stdio.h>

//void print_reverse(int a[], int n);
//
//int main(void) {
//	int a[] = { 10, 20, 30, 40, 50 };
//	print_reverse(a, 5);
//	return 0;
//}
//
//void print_reverse(int a[], int n)
//{
//	int* p = a + n - 1;       // ������ ���(��ġ)�� ����Ų��.
//	while (p >= a)           // ù���� ���(��ġ)���� �ݺ�
//		printf("%d\n", *p--); // p�� ����Ű�� ��ġ�� ����ϰ� ����
//}

void print_reverse(int *a, int n);

int main(void) {
	int a[] = { 10, 20, 30, 40, 50 };
	print_reverse(a, 5);
	return 0;
}

void print_reverse(int *a, int n)
{
	int* p = a + n - 1;       // ������ ���(��ġ)�� ����Ų��.
	while (p >= a)           // ù���� ���(��ġ)���� �ݺ�
		printf("%d\n", *p--); // p�� ����Ű�� ��ġ�� ����ϰ� ����
}