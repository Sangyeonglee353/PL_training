// ���ĺ��� �ƴ� ù ������ ��ġ �����ϱ�(strspn)

#include <stdio.h>
#include <string.h>

void main(void)
{
	 // 01234567890
	char* string = "ite's good ";
	char* find = "abcdefghijklmnopqrstuvwxyz";
	int nIndex;

	nIndex = strspn(string, find); 
	printf("%d ��ġ���� ���ĺ��� �ƴ� ù ���ڸ� ã�ҽ��ϴ�. \n", nIndex);
}