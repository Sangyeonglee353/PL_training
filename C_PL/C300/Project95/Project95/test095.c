// 문자열에서 앞뒤 2바이트씩 교환하기(swab)

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char string1[] = "1a2b3c4d5e";
	char string2[] = "..........";

	puts(string1);
	puts(string2);

	_swab(string1, string2, sizeof(string1) - 1);

	puts(string1);
	puts(string2);
}