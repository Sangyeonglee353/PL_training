#include <stdio.h>

main()
{
	int i = 1;
	int hap = 0;

	while (i <= 10) // i�� 10���� �۰ų� ���� ����
	{
		hap = hap + i;
		i++; // i�� ���� 1����
	}

	printf("hap= %d", hap); // hap = 55
}