// [���� 1] �迭���� ���� ��ġ ã��
#include <stdio.h>
#define AND &&
#define OR ||
#define NOT !
#define IS ==
#define ISNOT !=

int search(int list[], int n, int key);

int main(void) {
	int m[] = { 1, 2, 3, 4, 5, 6, 7 };

	// �迭 m���� 5�� ��ġ(m�� �迭 �ε���)�� ã�� �Լ�
	printf("%d\n", search(m, sizeof(m) / sizeof(m[0]), 5));
	return 0;
}

int search(int list[], int n, int key)
{
	int i = 0;
	while (i < n AND list[i] != key)
		i++;
	if (i IS n)
		return -1;
	else
		return i;
}
