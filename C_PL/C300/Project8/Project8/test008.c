#include<stdio.h>

int hapf(int value);

main()
{
	printf("1���� 10������ ���� %d\n", hapf(10));
	printf("1���� 100������ ���� %d\n", hapf(100));
	printf("1���� 1000������ ���� %d\n", hapf(1000));

}

int hapf(int value)
{
	int i;
	int hap = 0;

	for (i = 1; i <= value; i++)
	{
		hap = hap + i;
	}

	return hap;
}