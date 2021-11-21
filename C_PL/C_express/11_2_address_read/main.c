// [실습문제 11-2] 파일 내용 화면에 출력하기
#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;
	char buffer[500] = { 0, }; // 파일을 읽을 때 사용할 임시 공간

	fp = fopen("address.txt", "r");
	if (fp == NULL)
	{
		fprintf(stderr, "출력을 위한 파일을 열 수 없습니다.\n");
		exit(1);
	}

	// 파일 내용을 화면에 출력한다.
	fread(buffer, sizeof(buffer), 1, fp);
	printf("%s\n", buffer);

	fclose(fp);

	return 0;
}