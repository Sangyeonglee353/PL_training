// [���� 2] ���� ���� �б�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5
int main(void)
{
	int buffer[SIZE];
	FILE* fp = NULL;
	size_t size;
	int i;

	fp = fopen("binary.bin", "rb");
	if (fp == NULL)
	{
		fprintf(stderr, "binary.txt ������ �� �� �����ϴ�.");
		exit(1);
	}
	size = fread(buffer, sizeof(int), SIZE, fp);
	printf("size = %d \n", size);

	for (i = 0; i < size; i++)
		printf("buffer[%d] = %d \n", i, buffer[i]);

	fclose(fp);
	return 0;

}