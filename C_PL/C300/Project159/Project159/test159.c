// ���� �Ӽ� �����ϱ�(_chmod)

#include<stdio.h>
#include<io.h>
#include<sys/stat.h>

void main(void)
{
	char* filename = "d:\\mysources\\file_1.txt";

	if (_chmod(filename, _S_IREAD) != 0)
	{
		perror("���� �Ӽ� ���� ����");
	}
	else
	{
		puts("������ �Ӽ��� ���������� �����Ͽ����ϴ�.");
	}
}