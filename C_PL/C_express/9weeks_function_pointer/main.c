// �Լ� ������ ���� 1
#include <stdio.h>

int add(int, int);
int sub(int, int);

int main(void) {
	int result;
	int (*pf)(int, int); // �Լ� ������ ����

	pf = add;
	result = pf(10, 20);
	printf("10+20�� %d\n", result);

	pf = sub;
	result = pf(10, 20);
	printf("10-20�� %d\n", result);

	return 0;
}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a-b;
}
