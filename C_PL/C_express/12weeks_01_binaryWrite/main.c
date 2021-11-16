// [예제 1] 이진 파일 쓰기
#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>

int main(void)
{
	int buffer[] = { 10, 20, 30, 40, 50 };
	FILE* fp = NULL;
	size_t i, size, count;

	fp = fopen("binary.bin", "wb");
	if (fp == NULL)
	{
		fprintf(stderr, "binary.bin 파일을 열 수 없습니다.");
		exit(1);
	}

	size = sizeof(buffer[0]);
	count = sizeof(buffer) / sizeof(buffer[0]);

	i = fwrite(&buffer, size, count, fp);
	printf("i = %d\n", i);   //  i = 5
	fclose(fp);
	return 0;
}