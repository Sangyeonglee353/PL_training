// 이진 파일 쓰기(fwrite)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;
	char buff[5];

	fp = fopen("D:\\mysources\\file_2.txt", "w+b");

	buff[0] = '@';
	buff[1] = 0;
	buff[2] = 0x01;
	buff[3] = 0x03;
	buff[4] = 0x61;

	if (fp != NULL)
	{
		fwrite(buff, 1, 5, fp);
		fclose(fp);
	}
}