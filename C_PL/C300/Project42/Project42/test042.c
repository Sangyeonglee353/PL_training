#include <stdio.h>

int length(char* pstr);

main()
{
	int len = length("abcde");

	printf("���� = %d", len); // ���� = 5

}

int length(char* pstr)
{
	int len = 0;

	while (*pstr != NULL)
	{
		pstr++; // pstr�� ������ 1��ŭ ����
		len++; // ���ڿ��� ���̸� 1��ŭ ����
	}

	return len;
}