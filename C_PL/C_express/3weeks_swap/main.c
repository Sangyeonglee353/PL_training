// ����: swap() �Լ� #1
#include <stdio.h>

//void swap(int x, int y); // ���� ���� ȣ��: �Լ� ȣ��� ���� ����
// 
//int main(void)
//{
//	int a = 100, b = 200;
//	printf("[swap() ����]\n");
//	printf("a=%d b=%d\n\n", a, b);
//	swap(a, b);
//	printf("[swap() ����]\n");
//	printf("a=%d b=%d\n\n", a, b);
//	return 0;
//}
//
//void swap(int x, int y)
//{
//	int tmp;
//
//	printf("[swap() ����]\n");
//	printf("x=%d y=%d\n\n", x, y);
//	tmp = x;
//	x = y;
//	y = tmp;
//	printf("[swap() ���� ����]\n");
//	printf("x=%d y=%d\n\n", x, y);
//}

void swap(int* px, int* py); // ����(�ּ�)�� ���� ȣ��: �Լ� ȣ��� �ּҰ� ����

int main(void)
{
	int a = 100, b = 200;
	printf("[swap() ����]\n");
	printf("a=%d b=%d\n\n", a, b);
	swap(&a, &b); // �迭�� �������� ����̹Ƿ� & �ּҰ� �����ڸ� �Ⱥٿ��� ������,
	              // �Ϲ� ������ ��� �ּҰ� �����ڸ� �ٿ��� �Ѵ�.
	printf("[swap() ����]\n");
	printf("a=%d b=%d\n\n", a, b);
	return 0;
}

void swap(int* px, int* py)
{
	int tmp;

	printf("[swap() ����]\n");
	printf("*px=%d *py=%d\n\n", *px, *py);
	tmp = *px;
	*px = *py;
	*py = tmp;
	printf("[swap() ���� ����]\n");
	printf("*px=%d *py=%d\n\n", *px, *py);
}