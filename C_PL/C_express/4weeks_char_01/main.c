// ���ڿ� ���ڿ�
#include <stdio.h>

//int main(void) {
//	char c2[] = "C language";
//	int arraySize = sizeof(c2);
//
//	printf("���� �迭�� ũ��: %d\n", arraySize);
//
//	// ���ڿ� ���: case 1
//	for (int i = 0; c2[i] != '\0'; i++)
//		printf("%c", c2[i]);
//	printf("\n");
//
//	// ���ڿ� ���: case 2
//	int i = 0;
//	while (c2[i] != '\0') // c2[i] != NULL�� ����
//		printf("%c", c2[i++]);
//	printf("\n");
//
//	// ���ڿ� ���: case 3
//	printf("%s \n", c2);
//
//	return 0;
//}

int main(void) {
	char* c4 = "C language";
	int arraySize = sizeof(c4);

	printf("���� �������� ũ��: %d\n", arraySize);

	// ���ڿ� ���: case 1
	for (int i = 0; c4[i] != '\0'; i++)
		printf("%c", c4[i]);
	printf("\n");

	// ���ڿ� ���: case 2
	int i = 0;
	while (c4[i] != '\0') // c4[i] != NULL�� ����
		printf("%c", c4[i++]);
	printf("\n");

	// ���ڿ� ���: case 3
	printf("%s \n", c4);

	// ���ڿ� ���: case 4
	i = 0;
	while (c4[i] != '\0') // c4[i] != NULL�� ����
		printf("%c", *c4++);
	printf("\n");

	return 0;
}