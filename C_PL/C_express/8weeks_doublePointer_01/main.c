// ���� 1: �������� ������
#include <stdio.h>

int main()
{
	int a;
	int* p;
	int** q;

	a = 58;
	p = &a;
	q = &p;

	printf("a�� �ּҰ�: %p\n", &a);
	printf("p�� �ּҰ�: %p\n", &p);
	printf("q�� ��: %p\n\n", q);
	printf("q�� �ּҰ�: %p\n\n", &q);
	printf("���������� ���� q�� �޸� ������: %d ����Ʈ\n\n", sizeof(q));
	printf("%d \n", a);
	printf("%d \n", *p);
	printf("%d \n", **q);

	return 0;
}