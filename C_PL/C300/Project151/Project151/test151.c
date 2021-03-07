// ���� �������� ���� ��ġ �����ϱ�(fsetpos)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	FILE* fp;
	fpos_t pos;

	fp = fopen("d:\\mysources\\file.txt", "w+");

	fgetpos(fp, &pos); // pos: 0
	fputs("abcde", fp); // ���� �������� ��ġ: 5
	fsetpos(fp, &pos); // ���� �������� ��ġ: 0
	printf("���� �������� ��ġ: %d \n", ftell(fp)); // ��ġ: 0
	fclose(fp);
}