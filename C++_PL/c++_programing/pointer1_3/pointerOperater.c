// �������� ���� ����
#include <stdio.h>

int test7_main(void)
{
	int i = 10;
	int* pi = &i;

	printf("i = %d,  pi = %p\n", i, pi);
	(*pi)++;
	printf("i = %d,  pi = %p\n", i, pi);

	printf("i = %d,  pi = %p\n", i, pi);
	*pi++;	// (*pi)++ ; // �ΰ��� ���̰� �ִ°�? ��� ���� ���°�?
	printf("i = %d,  pi = %p\n", i, pi);

	return 0;
}
