// �迭 ������ ���� 1
#include <stdio.h>
int main(void)
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int(*pa)[5];
	int i;
	pa = &a;
	for (i = 0; i < 5; i++)
		printf("%d \n", (*pa)[i]);

	printf("%d \n", pa); // [Q] ���� pa�� ���� 100�̶�� �Ҷ� pa++��?
	pa++;
	printf("%d \n", pa);

	return 0;
}