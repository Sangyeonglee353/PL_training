#include <stdio.h>

int length(char* pstr);

main()
{
	int len = length("abcde");

	printf("길이 = %d", len); // 길이 = 5

}

int length(char* pstr)
{
	int len = 0;

	while (*pstr != NULL)
	{
		pstr++; // pstr의 번지를 1만큼 증가
		len++; // 문자열의 길이를 1만큼 증가
	}

	return len;
}