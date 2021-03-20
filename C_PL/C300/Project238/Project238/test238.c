// 이진 파일 읽기(fread)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;
	char buff;

	fp = fopen("D:\\mysources\\file_2.txt", "rb");

	if (fp != NULL)
	{
		while (!feof(fp))
		{
			fread(&buff, 1, 1, fp);
			if (!feof(fp))
			{
				printf("%d (%#x) ", buff, buff);
			}
		}
		fclose(fp);
	}
}