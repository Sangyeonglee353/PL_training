// [�ǽ����� 11-2] ���� ���� ȭ�鿡 ����ϱ�
#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;
	char buffer[500] = { 0, }; // ������ ���� �� ����� �ӽ� ����

	fp = fopen("address.txt", "r");
	if (fp == NULL)
	{
		fprintf(stderr, "����� ���� ������ �� �� �����ϴ�.\n");
		exit(1);
	}

	// ���� ������ ȭ�鿡 ����Ѵ�.
	fread(buffer, sizeof(buffer), 1, fp);
	printf("%s\n", buffer);

	fclose(fp);

	return 0;
}