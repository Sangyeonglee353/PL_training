// ���͸� �����ϱ�(_mkdir)

#include<stdio.h>
#include<direct.h>

void main(void)
{
	char* pathname = "d:\\mysources\\test";

	if (_mkdir(pathname) == -1)
	{
		perror("���͸� ���� ����");
	}
	else
	{
		puts("���͸��� ���������� �����Ͽ����ϴ�.");
	}
}