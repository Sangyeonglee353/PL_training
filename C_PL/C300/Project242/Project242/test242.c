// ���Ͽ��� Ư�� ���ڿ� �˻��ϱ�(strstr)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main(void)
{
	FILE* fp;
	char buff[200];
	int line = 1;

	fp = fopen("D:\\mysources\\file_1.txt", "r");

	if (fp == NULL)
	{
		perror("���� �б� ���� ����");
		return;
	}

	while (!feof(fp))
	{
		fgets(buff, 200, fp);

		if (strstr(buff, "���ѹα�"))
		{
			printf("Line(%2d): %s", line, buff);
		}
		line ++;
	}
	_fcloseall();
}