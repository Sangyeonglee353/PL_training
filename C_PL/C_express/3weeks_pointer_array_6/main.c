// �����Ϳ� �迭
// �����ʹ� ù��° �ּҸ� �����ϹǷ� ȿ����
// �迭�� ��� �� ����� ��ȿ����

//#include <stdio.h>
//#define SIZE 3
//void sub(int b[], int n);
//
//int main(void) {
//	int a[SIZE] = { 1, 2, 3 };
//	
//	printf("%d %d %d\n", a[0], a[1], a[2]);
//	sub(a, SIZE); // �迭�� �������� ����� �����Ƿ� ������ ���� ȣ��ó�� ���� ���� ����ȴ�.
//	              // �׷��� �Ϲ� ������ ��� ���� ���� ȣ��� ���� ������ ������ ��ġ�� �ʴ´�.
//	printf("%d %d %d\n", a[0], a[1], a[2]);
//	return 0;
//}
//
//void sub(int b[], int n)
//{
//	b[0] = 4;
//	b[1] = 5;
//	b[2] = 6;
//}

#include <stdio.h>
#define SIZE 3
void sub(int *b, int n);

int main(void) {
	int a[SIZE] = { 1, 2, 3 };

	printf("%d %d %d\n", a[0], a[1], a[2]);
	sub(a, SIZE); // �迭�� �������� ����� �����Ƿ� ������ ���� ȣ��ó�� ���� ���� ����ȴ�.
				  // �׷��� �Ϲ� ������ ��� ���� ���� ȣ��� ���� ������ ������ ��ġ�� �ʴ´�.
	printf("%d %d %d\n", a[0], a[1], a[2]);
	return 0;
}

void sub(int *b, int n)
{
	b[0] = 4;
	b[1] = 5;
	b[2] = 6;
}