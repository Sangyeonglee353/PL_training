// �ؽ�Ʈ ������ �� �پ� �б�(fgets)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;
	char buff[100];

	fp = fopen("D:\\mysources\\file_2.txt", "r");

	if (fp != NULL)
	{
		while (!feof(fp))
		{
			fgets(buff, 100, fp);
			printf(buff);
		}
		fclose(fp);
	}
}