// ������ �ٸ� ���͸��� �̵��ϱ�(rename)

#include<stdio.h>

void main(void)
{
	char* filename = "D:\\mysources\\file_2.txt";
	char* movefile = "D:\\file_2.txt";

	if (rename(filename, movefile) != 0)
	{
		perror("���� �̵� ����");
	}
	else
	{
		puts("������ �̵��Ǿ����ϴ�.");
	}
}