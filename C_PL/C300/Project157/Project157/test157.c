// ������ �����ϴ��� Ȯ���ϱ�(_access)

#include <stdio.h>
#include <io.h>

void main(void)
{
	char* path = "d:\\mysources\\file.txt";

	if (_access(path, 0) == 0)
	{
		puts("�ش� ��ο� ������ �����մϴ�.");
	}
}