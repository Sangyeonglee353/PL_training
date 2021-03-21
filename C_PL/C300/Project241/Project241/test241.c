// �� ���� ���� ��ġ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define FILEREAD 4096

void main(void)
{
	FILE* fpR1, * fpR2, * fpW;
	char buff[FILEREAD];
	int len;

	fpR1 = fopen("D:\\mysources\\file_1.bin", "rb");

	if (fpR1 == NULL)
	{
		perror("���� �б� ���� ����");
		return;
	}

	fpR2 = fopen("D:\\mysources\\file_copy.bin", "rb");

	if (fpR2 == NULL)
	{
		perror("���� �б� ���� ����");
		_fcloseall();
		return;
	}

	fpW = fopen("D\\mysources\\file2.bin", "w+b");

	if (fpW == NULL)
	{
		perror("���� ���� ���� ����");
		_fcloseall();
		return;
	}

	while (!feof(fpR1))
	{
		len = fread(buff, 1, FILEREAD, fpR1);
		if (ferror(fpR1))
		{
			perror("���� �б� ���� 1");
			_fcloseall();
			return;
		}

		if (len > 0)
		{
			fwrite(buff, 1, len, fpW);
			if (ferror(fpW))
			{
				perror("���� ���� ���� 1");
				_fcloseall();
				return;
			}
		}
	}
	while (!feof(fpR2))
	{
		len = fread(buff, 1, FILEREAD, fpR2);
		if (ferror(fpR2))
		{
			perror("���� �б� ���� 2");
			_fcloseall();
			return;
		}

		if (len > 0)
		{
			fwrite(buff, 1, len, fpW);
			if (ferror(fpW))
			{
				perror("���� ���� ���� 2");
				_fcloseall();
				return;
			}
		}
	}

	_fcloseall();

	puts("������ ���������� ���������ϴ�.");
}