// ���͸� �����ϱ�(_ rmdir)

#include<stdio.h>
#include<direct.h>

void main(void)
{
	char* pathname = "d:\\mysources\\test";

	if (_rmdir(pathname) == -1)
	{
		perror("���͸� ���� ����");
	}
	else
	{
		puts("���͸��� ���������� �����Ͽ����ϴ�.");
	}
}