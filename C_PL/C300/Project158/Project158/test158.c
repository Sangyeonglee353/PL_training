// ���� �̸� �����ϱ�(rename)

#include <stdio.h>

void main(void)
{
	char* oldname = "d:\\mysources\\file.txt";
	char* newname = "d:\\mysources\\file_1.txt";

	if (rename(oldname, newname) != 0)
	{
		perror("���ϸ� ���� ����");
	}
	else
	{
		puts("���ϸ��� ���������� �����Ͽ����ϴ�.");
	}
}