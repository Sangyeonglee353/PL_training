// ���� 3: ���ڿ� �迭
#include <stdio.h>

int main(void)
{
	int i, n;
	char* fruits[] = {
		"apple",
		"blueberry",
		"orange",
		"melon"
	};

	// �迭 ���� ���� ���
	n = sizeof(fruits) / sizeof(fruits[0]);

	printf("sizeof(fruits): %d\n", sizeof(fruits));
	printf("sizeof(fruits[0]: %d\n\n", sizeof(fruits[0]));

	for (i = 0; i < n; i++)
		printf("%s \n", fruits[i]);

	return 0;
}