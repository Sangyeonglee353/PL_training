// ���Ͽ��� Ư�� ���ڿ� ��ü�ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

void main(void)
{
	FILE* fpR, * fpW;
	char buff[200];
	char* pbuf, * dup;
	int len, pos1, pos2;

	fpR = fopen("D:\\mysources\\file_1.txt", "r");

	if (fpR == NULL)
	{
		perror("���� �б� ���� ����");
		return;
	}

	fpW = fopen("D:\\mysources\\file_change.txt", "w+");

	if (fpW == NULL)
	{
		perror("���� ���� ���� ����");
		_fcloseall();
		return;
	}
	
	while (!feof(fpR))
	{
		fgets(buff, 200, fpR);
		
		pbuf = strstr(buff, "���ѹα�");

		if (pbuf)
		{
			len = strlen(buff);
			pos1 = pbuf - buff;

			dup = _strdup(buff);
			_strnset(&buff[pos1], 0, len - pos1);
			strcat(buff, "�ѱ�");

			pos1 = pbuf - buff + strlen("���ѹα�");
			pos2 = pbuf - buff + strlen("�ѱ�");

			strcpy(&buff[pos2], &dup[pos1]);
			free(dup);
		}

		if (!feof(fpR))
		{
			fputs(buff, fpW);
		}

		_fcloseall();
		puts("���ѹα��� �ѱ����� ��� ��ü�Ͽ����ϴ�.");
	}
}