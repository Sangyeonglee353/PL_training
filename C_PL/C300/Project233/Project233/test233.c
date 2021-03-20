// 텍스트 파일을 한 줄씩 쓰기(fopen, fputs, fclose)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;

	fp = fopen("D:\\mysources\\file_2.txt", "w+");

	if (fp != NULL)
	{
		fputs("대한민국 \n", fp);
		fputs("대한민국 \n", fp);
		fputs("대한민국 \n", fp);
		fputs("대한민국 \n", fp);
		fputs("대한민국 \n", fp);
		fputs("대한민국 \n", fp);
		fputs("대한민국 \n", fp);
		fclose(fp);
	}
}