/*���� stringpointer1-1.c*/
#include <stdio.h>

int test8_main()
{
	int i;
	char str1[5] = "abcd";
	char* str2 = "ABCD";

	// ���ڿ� �迭 �������� ����Ǿ� �ִ� �޸� ������ ���ڸ� Ȯ�� 
	for (i = 0; i < 5; i++) {
		printf("�޸� ����: %d ����: %c \n", &str1[i], str1[i]);

	}

	// ���ڿ� ������ �������� ����Ǿ� �ִ� �޸� ������ ���ڸ� Ȯ�� 
	for (i = 0; i < 5; i++) {
		printf("�޸� ����: %d ����: %c \n", &str2[i], str2[i]);

	}

	printf("%s \n", str1);
	printf("%s \n", str2);

	str1[0] = 'x';  // O.K. ����
	//str2[0] = 'x';  // O.K. �Ұ�

	printf("%s \n", str1);
	printf("%s \n", str2);

	return 0;
}
