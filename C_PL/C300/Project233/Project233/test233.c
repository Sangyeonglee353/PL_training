// �ؽ�Ʈ ������ �� �پ� ����(fopen, fputs, fclose)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;

	fp = fopen("D:\\mysources\\file_2.txt", "w+");

	if (fp != NULL)
	{
		fputs("���ѹα� \n", fp);
		fputs("���ѹα� \n", fp);
		fputs("���ѹα� \n", fp);
		fputs("���ѹα� \n", fp);
		fputs("���ѹα� \n", fp);
		fputs("���ѹα� \n", fp);
		fputs("���ѹα� \n", fp);
		fclose(fp);
	}
}