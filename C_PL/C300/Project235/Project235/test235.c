// �ؽ�Ʈ ���� ����(fwrite)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;
	char* string = "�츮���� \n";

	fp = fopen("D:\\mysources\\file_2.txt", "w+");

	if (fp != NULL)
	{
		fwrite(string, 1, strlen(string), fp);
		fwrite(string, 1, strlen(string), fp);
		fwrite(string, 1, strlen(string), fp);
		fclose(fp);
	}
}