// ���ڿ����� Ư�� ��ġ�� ���� ��ü�ϱ�(strnset)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main(void)
{
	char string[] = "��ȣ�� Korea�Դϴ�.";
	char* pstr;

	pstr = strstr(string, "Korea");
	if (pstr)
	{
		_strnset(pstr, '*', 5);
	}
	puts(string);
}