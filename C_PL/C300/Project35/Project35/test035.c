#include <stdio.h>

main()
{
	int i = 1;
	int hap = 0;

	while (i <= 10) // i가 10보다 작거나 같은 동안
	{
		hap = hap + i;
		i++; // i의 값을 1증가
	}

	printf("hap= %d", hap); // hap = 55
}