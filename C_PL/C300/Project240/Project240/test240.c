// ���� �����ϱ�(fread, fwrite)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fpR, * fpW;
	char buff;
	int len;

	fpR = fopen("D:\\mysources\\file_1.bin", "rb");

	if (fpR == NULL)
	{
		perror("���� �б� ���� ����");
		return;
	}

	fpW = fopen("D:\\mysources\\file_1_copy.bin", "w+b");

	if (fpW == NULL)
	{
		perror("���� ���� ���� ����");
		fclose(fpR);
		return;
	}

	while (!feof(fpR))
	{
		len = fread(&buff, 1, 1, fpR);
		if (ferror(fpR))
		{
			perror("���� �б� ����");
			_fcloseall();
			return;
		}

		if (len > 0) // if(!feof(fpR)
		{
			fwrite(&buff, 1, 1, fpW);
			if (ferror(fpW))
			{
				perror("���� ���� ����");
				_fcloseall();
				return;
			}
		}
	}

	_fcloseall();

	puts("������ ���������� �����Ͽ����ϴ�.");
}