// ���ڿ��� Ư�� ���� ��ġ���� �߶󳻱�(strchr)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main(void)
{
	char string[] = "a.book";
	char* pstr = string;
	char* pfind = sting;
	int i = 0;

	while (pfind)
	{
		pfind = strchr(pstr, 'a');

		if (pfind == NULL)
		{
			pfind = strchr(pstr, '.');
			if (pfind)
			{
				pstr = &string[++i];
			}
			else
			{
				pstr = &string[++i];
			}
		}
		
	}
	puts(pstr);
}