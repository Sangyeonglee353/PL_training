#include <stdio.h>
#include <string.h>

// ���ڿ� �߿��� ��ġ�Ǵ� ù ������ ��ġ ���ϱ�(strcspn)
void main(void)
{
	char* string = "This is a string $$$";
	char* strCharSet = "~!@#$%^&*()_+-={}[]:;'<>./?";
	unsigned int pos;

	pos = strcspn(string, strCharSet);

	puts("0             1                2                3");
	puts("01234567890");
	puts(string);
	puts(strCharSet);

	printf("%d ��ġ���� ��ġ�Ǵ� ù ���ڸ� �߰��Ͽ����ϴ�. \n", pos);
}